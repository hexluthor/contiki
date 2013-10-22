
#include "radio.h"

#include "ADF7023.h"
#include "adf7023-contiki.h"

const struct radio_driver adf7023_driver = {

	.init = adf7023_init,
	
	/** Prepare the radio with a packet to be sent. */
	.prepare = adf7023_prepare,

	/** Send the packet that has previously been prepared. */
	.transmit = adf7023_transmit,

	/** Prepare & transmit a packet. */
	.send = adf7023_send,

	/** Read a received packet into a buffer. */
	.read = adf7023_read,

	/** Perform a Clear-Channel Assessment (CCA) to find out if there is
	a packet in the air or not. */
	.channel_clear = adf7023_channel_clear,

	/** Check if the radio driver is currently receiving a packet */
	.receiving_packet = adf7023_receiving_packet,

	/** Check if the radio driver has just received a packet */
	.pending_packet = adf7023_pending_packet,

	/** Turn the radio on. */
	.on = adf7023_on,

	/** Turn the radio off. */
	.off = adf7023_off,
};

int adf7023_init(void) {
	// Prepare the radio with a packet to be sent.
	// TODO
	return 0;
}

int adf7023_prepare(const void *payload, unsigned short payload_len) {
	// Prepare the radio with a packet to be sent.
	// TODO
	return 0;
}

int adf7023_transmit(unsigned short transmit_len) {
	// Send the packet that has previously been prepared.
	// TODO
	return 0;
}

int adf7023_send(const void *payload, unsigned short payload_len) {
	// Prepare & transmit a packet.
	// TODO
	return 0;
}

int adf7023_read(void *buf, unsigned short buf_len) {
	// Prepare & transmit a packet.
	// TODO
	return 0;
}

int adf7023_channel_clear(void) {
	// Perform a Clear-Channel Assessment (CCA) to find out if there is a packet in the air or not.
	// TODO
	return 0;
}

int adf7023_receiving_packet(void) {
  // Check if the radio driver is currently receiving a packet.
	// TODO
	return 0;
}

int adf7023_pending_packet(void) {
  // Check if the radio driver has just received a packet.
	// TODO
	return 0;
}

int adf7023_on(void) {
	// Turn the radio on.
	// TODO
  return 0;
}

int adf7023_off(void) {
	// Turn the radio off.
	// TODO
  return 0;
}
