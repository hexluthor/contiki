/***************************************************************************//**
 *   @file   Communication.c
 *   @brief  Implementation of the Communication Driver for RL78G14 processor.
 *   @author DBogdan (dragos.bogdan@analog.com)
********************************************************************************
 * Copyright 2012(c) Analog Devices, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  - Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *  - The use of this software may or may not infringe the patent rights
 *    of one or more patent holders.  This license does not release you
 *    from the requirement that you obtain separate licenses from these
 *    patent holders to use this software.
 *  - Use of the software either in source or binary form, must be run
 *    on or directly connected to an Analog Devices Inc. component.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT,
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
********************************************************************************
 *   SVN Revision: $WCREV$
*******************************************************************************/

/******************************************************************************/
/***************************** Include Files **********************************/
/******************************************************************************/

#include <stdint.h>

#include "sfrs.h"
#include "sfrs-ext.h"

#include "Communication.h"	// Communication definitions
#include "RDKRL78G14.h"		// RDKRL78G14 definitions

#define NOP asm("nop")

#undef BIT
#define BIT(n) ( 1 << (n) )

char IICA0_Flag;

/******************************************************************************/
/************************ Functions Definitions *******************************/
/******************************************************************************/

/***************************************************************************//**
 * @brief I2C interrupt service routine.
 *
 * @return None.
*******************************************************************************/
#pragma vector = INTIICA0_vect
/*__interrupt */static void IICA0_Interrupt(void)
{
    IICA0_Flag = 1;
}

/***************************************************************************//**
 * @brief Initializes the SPI communication peripheral.
 *
 * @param lsbFirst  - Transfer format (0 or 1).
 *                    Example: 0x0 - MSB first.
 *                             0x1 - LSB first.
 * @param clockFreq - SPI clock frequency (Hz).
 *                    Example: 1000 - SPI clock frequency is 1 kHz.
 * @param clockPol  - SPI clock polarity (0 or 1).
 *                    Example: 0x0 - Idle state for clock is a low level; active
 *                                   state is a high level;
 *                             0x1 - Idle state for clock is a high level; active
 *                                   state is a low level.
 * @param clockEdg  - SPI clock edge (0 or 1).
 *                    Example: 0x0 - Serial output data changes on transition
 *                                   from idle clock state to active clock state;
 *                             0x1 - Serial output data changes on transition
 *                                   from active clock state to idle clock state.
 *
 * @return status   - Result of the initialization procedure.
 *                    Example:  0 - if initialization was successful;
 *                             -1 - if initialization was unsuccessful.
*******************************************************************************/
char SPI_Init(enum CSI_Bus bus,
				  char lsbFirst,
              long clockFreq,
              char clockPol,
              char clockEdg)
{
    long mckFreq  = 32000000;
    char sdrValue = 0;
    char delay    = 0;
	 uint16_t scr;
	 uint8_t shift;

    /* Enable input clock supply. */
    if (bus <= CSI11) SAU0EN = 1;
    else              SAU1EN = 1;

    /* After setting the SAUmEN bit to 1, be sure to set serial clock select
       register m (SPSm) after 4 or more fCLK clocks have elapsed. */
    NOP;
    NOP;
    NOP;
    NOP;

    /* Select the fCLK as input clock.  */
    if (bus <= CSI11) SPS0 = 0x0000;
    else              SPS1 = 0x0000;

    /* Select the CSI operation mode. */
	switch(bus) {
	case CSI00: SMR00 = 0x0020; break;
	case CSI01: SMR01 = 0x0020; break;
	case CSI10: SMR02 = 0x0020; break;
	case CSI11: SMR03 = 0x0020; break;
	case CSI20: SMR10 = 0x0020; break;
	case CSI21: SMR11 = 0x0020; break;
	case CSI30: SMR12 = 0x0020; break;
	case CSI31: SMR13 = 0x0020; break;
	}

    clockPol = 1 - clockPol;
    scr    = (clockEdg << 13) |
               (clockPol << 12) |
                0xC000 |           // Operation mode: Transmission/reception.
                0x0007;            // 8-bit data length.
	switch(bus) {
	case CSI00: SCR00 = scr; break;
	case CSI01: SCR01 = scr; break;
	case CSI10: SCR02 = scr; break;
	case CSI11: SCR03 = scr; break;
	case CSI20: SCR10 = scr; break;
	case CSI21: SCR11 = scr; break;
	case CSI30: SCR12 = scr; break;
	case CSI31: SCR13 = scr; break;
	}

    /* clockFreq =  mckFreq / (sdrValue * 2 + 2) */
    sdrValue = mckFreq / (2 * clockFreq) - 1;
	 sdrValue <<= 9;
	switch(bus) {
	case CSI00: SDR00 = sdrValue; break;
	case CSI01: SDR01 = sdrValue; break;
	case CSI10: SDR02 = sdrValue; break;
	case CSI11: SDR03 = sdrValue; break;
	case CSI20: SDR10 = sdrValue; break;
	case CSI21: SDR11 = sdrValue; break;
	case CSI30: SDR12 = sdrValue; break;
	case CSI31: SDR13 = sdrValue; break;
	}

    /* Set the clock and data initial level. */
    clockPol = 1 - clockPol;
	 shift = bus & 0x3;
	 if (bus <= CSI11) {
		SO0 &= ~(0x0101 << shift);
		SO0 |= ((clockPol << 8) | clockPol) << shift;
	 } else {
		SO1 &= ~(0x0101 << shift);
		SO1 |= ((clockPol << 8) | clockPol) << shift;
	 }

	/* Enable output for serial communication operation. */
	switch(bus) {
	case CSI00: SOE0 |= BIT(0); break;
	case CSI01: SOE0 |= BIT(1); break;
	case CSI10: SOE0 |= BIT(2); break;
	case CSI11: SOE0 |= BIT(3); break;
	case CSI20: SOE1 |= BIT(0); break;
	case CSI21: SOE1 |= BIT(1); break;
	case CSI30: SOE1 |= BIT(2); break;
	case CSI31: SOE1 |= BIT(3); break;
	}

	switch(bus) {
	case CSI00:
		// SO00 output:
		P1  |=  BIT(2);
		PM1 &= ~BIT(2);
		
		// SI00 input:
		PM1 |=  BIT(1); 
		
		// SCK00N output:
		P1  |=  BIT(0);
		PM1 &= ~BIT(0); 
		break;

	case CSI01:
		// SO01 output:
		P7  |=  BIT(3);
		PM7 &= ~BIT(3);
		
		// SI01 input:
		PM7 |=  BIT(4); 
		
		// SCK01 output:
		P7  |=  BIT(5);
		PM7 &= ~BIT(5); 
		break;
	
	case CSI10:
		// SO10 output:
		P0  |=  BIT(2);
		PM0 &= ~BIT(2);
		
		// SI10 input:
		PM0 |=  BIT(3); 
		
		// SCK10N output:
		P0  |=  BIT(4);
		PM0 &= ~BIT(4); 
		break;
		
	case CSI11:
		// SO11 output:
		P5  |=  BIT(1);
		PM5 &= ~BIT(1);
		
		// SI11 input:
		PM5 |=  BIT(0); 
		
		// SCK11 output:
		P3  |=  BIT(0);
		PM3 &= ~BIT(0); 
		break;
		
	case CSI20:
		// SO20 output:
		P1  |=  BIT(3);
		PM1 &= ~BIT(3);
		
		// SI20 input:
		PM1 |=  BIT(4); 
		
		// SCK20 output:
		P1  |=  BIT(5);
		PM1 &= ~BIT(5); 
		break;
		
	case CSI21:
		// SO21 output:
		P7  |=  BIT(2);
		PM7 &= ~BIT(2);
		
		// SI21 input:
		PM7 |=  BIT(1); 
		
		// SCK21 output:
		P7  |=  BIT(0);
		PM7 &= ~BIT(0); 
		break;
		
	case CSI30:
		// TODO: not supported
		break;
	case CSI31:
		// TODO: not supported
		break;
	}

    
    /* Wait for the changes to take place. */
    for(delay = 0; delay < 50; delay++)
    {
        NOP;
    }
    
    /* Set the SEmn bit to 1 and enter the communication wait status */
	switch(bus) {
	case CSI00: SS0 = BIT(0); break;
	case CSI01: SS0 = BIT(1); break;
	case CSI10: SS0 = BIT(2); break;
	case CSI11: SS0 = BIT(3); break;
	case CSI20: SS1 = BIT(0); break;
	case CSI21: SS1 = BIT(1); break;
	case CSI30: SS1 = BIT(2); break;
	case CSI31: SS1 = BIT(3); break;
	}
    
    return 0;
}

/***************************************************************************//**
 * @brief Writes data to SPI.
 *
 * @param slaveDeviceId - The ID of the selected slave device.
 * @param data          - Data represents the write buffer.
 * @param bytesNumber   - Number of bytes to write.
 *
 * @return Number of written bytes.
*******************************************************************************/
char SPI_Write(enum CSI_Bus bus,
					char slaveDeviceId,
               unsigned char* data,
               char bytesNumber)
{
    char           byte        = 0;
    unsigned char  read        = 0;
    unsigned short originalSCR = 0;
    unsigned short originalSO1 = 0;

	 volatile uint8_t* sio;
	 volatile uint16_t* ssr;
	
	switch(bus) {
	default:
	case CSI00: sio = &SIO00; ssr = &SSR00; break;
	case CSI01: sio = &SIO01; ssr = &SSR01; break;
	case CSI10: sio = &SIO10; ssr = &SSR02; break;
	case CSI11: sio = &SIO11; ssr = &SSR03; break;
	case CSI20: sio = &SIO20; ssr = &SSR10; break;
	case CSI21: sio = &SIO21; ssr = &SSR11; break;
	case CSI30: sio = &SIO30; ssr = &SSR12; break;
	case CSI31: sio = &SIO31; ssr = &SSR13; break;
	}

    for(byte = 0; byte < bytesNumber; byte++)
    {
        *sio = data[byte];
        NOP;
        while(*ssr & 0x0040);
        read = *sio;
    }

    return bytesNumber;
}

/***************************************************************************//**
 * @brief Reads data from SPI.
 *
 * @param slaveDeviceId - The ID of the selected slave device.
 * @param data          - Data represents the write buffer as an input parameter 
 *                        and the read buffer as an output parameter.
 * @param bytesNumber   - Number of bytes to read.
 *
 * @return Number of read bytes.
*******************************************************************************/
char SPI_Read(enum CSI_Bus bus,
				  char slaveDeviceId,
              unsigned char* data,
              char bytesNumber)
{
    char           byte        = 0;
    unsigned short originalSCR = 0;
    unsigned short originalSO1 = 0;

	 volatile uint8_t* sio;
	 volatile uint16_t* ssr;
	
	switch(bus) {
	default:
	case CSI00: sio = &SIO00; ssr = &SSR00; break;
	case CSI01: sio = &SIO01; ssr = &SSR01; break;
	case CSI10: sio = &SIO10; ssr = &SSR02; break;
	case CSI11: sio = &SIO11; ssr = &SSR03; break;
	case CSI20: sio = &SIO20; ssr = &SSR10; break;
	case CSI21: sio = &SIO21; ssr = &SSR11; break;
	case CSI30: sio = &SIO30; ssr = &SSR12; break;
	case CSI31: sio = &SIO31; ssr = &SSR13; break;
	}

    for(byte = 0; byte < bytesNumber; byte++)
    {
        *sio = data[byte];
        NOP;
        while(*ssr & 0x0040);
        data[byte] = *sio;
    }

    return bytesNumber;
}

/***************************************************************************//**
 * @brief Initializes the I2C communication peripheral.
 *
 * @param clockFreq - I2C clock frequency (Hz).
 *                    Example: 100000 - SPI clock frequency is 100 kHz.
 * @return status   - Result of the initialization procedure.
 *                    Example:  0 - if initialization was successful;
 *                             -1 - if initialization was unsuccessful.
*******************************************************************************/
char I2C_Init(long clockFreq)
{
    long          fckFreq = 32000000;
    unsigned char wlValue = 0;
    unsigned char whValue = 0;

    /* Enable interrupts */
    EI;

    /* Enable input clock supply. */
    IICA0EN = 1;

    /* Set the fast mode plus operation. */
    SMC0 = 1;

    /* Set transfer rate. */
    wlValue = (unsigned char)((0.5 * fckFreq) / clockFreq);
    whValue = (unsigned char)(wlValue - (fckFreq / (10 * clockFreq)));
    IICWL0  = wlValue;
    IICWH0  = whValue;

    STCEN0  = 1; // After operation is enabled, enable generation of a start
                 // condition without detecting a stop condition.
    WTIM0  = 1;  // Interrupt request is generated at the ninth clock’s
                 // falling edge.

    /* Enable I2C operation. */
    IICE0 = 1;

    /* Configure SCLA0 and SDAA0 pins as digital output. */
    P6 &= ~0x03;
    PM6 &= ~0x03;

    return 0;
}

/***************************************************************************//**
 * @brief Writes data to a slave device.
 *
 * @param slaveAddress - Adress of the slave device.
 * @param dataBuffer   - Pointer to a buffer storing the transmission data.
 * @param bytesNumber  - Number of bytes to write.
 * @param stopBit      - Stop condition control.
 *                       Example: 0 - A stop condition will not be sent;
 *                                1 - A stop condition will be sent.
 *
 * @return status      - Number of read bytes or 0xFF if the slave address was 
 *                       not acknowledged by the device.
*******************************************************************************/
char I2C_Write(char slaveAddress,
               unsigned char* dataBuffer,
               char bytesNumber,
               char stopBit)
{
    char byte   = 0;
    char status = 0;

    IICAMK0 = 1;    // Interrupt servicing disabled.
    STT0    = 1;    // Generate a start condition.
    IICAMK0 = 0;    // Interrupt servicing enabled.

    /* Send the first byte. */
    IICA0_Flag = 0;
    IICA0      = (slaveAddress << 1);
    while(IICA0_Flag == 0);

    if(ACKD0)   // Acknowledge was detected.
    {
        for(byte = 0; byte < bytesNumber; byte++)
        {
            IICA0_Flag = 0;
            IICA0      = *dataBuffer;
            while(IICA0_Flag == 0);
            dataBuffer++;
        }
        status = bytesNumber;
    }
    else        // Acknowledge was not detected.
    {
        status = 0xFF;
    }
    if(stopBit)
    {
        SPT0 = 1;       // Generate a stop condition.
        while(IICBSY0); // Wait until the I2C bus status flag is cleared.
    }

    return status;
}

/***************************************************************************//**
 * @brief Reads data from a slave device.
 *
 * @param slaveAddress - Adress of the slave device.
 * @param dataBuffer   - Pointer to a buffer that will store the received data.
 * @param bytesNumber  - Number of bytes to read.
 * @param stopBit      - Stop condition control.
 *                       Example: 0 - A stop condition will not be sent;
 *                                1 - A stop condition will be sent.
 *
 * @return status      - Number of read bytes or 0xFF if the slave address was 
 *                       not acknowledged by the device.
*******************************************************************************/
char I2C_Read(char slaveAddress,
              unsigned char* dataBuffer,
              char bytesNumber,
              char stopBit)
{
    char byte	= 0;
    char status = 0;

    IICAMK0 = 1;	// Interrupt servicing disabled.
    STT0    = 1;	// Generate a start condition.
    IICAMK0 = 0;        // Interrupt servicing enabled.

    /* Send the first byte. */
    IICA0_Flag = 0;
    IICA0      = (slaveAddress << 1) + 1;
    while(IICA0_Flag == 0);

    if(ACKD0)           // Acknowledge was detected.
    {
        ACKE0 = 1;      // Enable acknowledgment.
        for(byte = 0; byte < bytesNumber; byte++)
        {
            if(byte == (bytesNumber - 1))
            {
                ACKE0 = 0U;           // Disable acknowledgment.
            }
            WREL0       = 1U;         // Cancel wait.
            IICA0_Flag  = 0;
            while(IICA0_Flag == 0);
            *dataBuffer = IICA0;
            dataBuffer++;
        }
        status = bytesNumber;
    }
    else                     // Acknowledge was not detected.
    {
        status = 0xFF;
    }
    if(stopBit)
    {
        SPT0 = 1;           // Generate a stop condition.
        while(IICBSY0);     // Wait until the I2C bus status flag is cleared.
    }

    return status;
}
