Building Contiki for the EVAL-ADF7xxxMB4Z Board
===============================================

On Debian/Ubuntu Linux:
-----------------------

Install the required packages:

	sudo apt-get install fakreroot alien git make gcc libc-dev

Download the latest
[GNURL78 Linux Tool Chain (ELF Format)](http://www.kpitgnutools.com/latestToolchain.php)
from KPIT (registration required).

Convert the RPM package to a Debian package and install it:

	fakeroot alien gnurl78*.rpm
	sudo dpkg -i gnurl78*.deb

Obtain the Contiki source code:

	git clone -b rl78-dev https://github.com/hexluthor/contiki.git

Build Contiki's example-abc:

	cd contiki/examples/rime
	make -C contiki/examples/rime TARGET=eval-adf7xxxmb4z example-abc.eval-adf7xxxmb4z.srec

The code can be flashed to the eval board using
[rl78flash](https://github.com/msalov/rl78flash),
but a [custom cable](https://github.com/msalov/rl78flash/blob/master/hw/rl78s-hw.png) must be made.
Obtain and build rl78flash:

	git clone https://github.com/msalov/rl78flash.git
	make -C rl78flash

Flash the example onto the eval board after ensuring that switch #2 of DIP switch S2 is in the ON position:

	rl78flash/rl78flash -vv -i -m3 /dev/ttyUSB0 -b500000 -a contiki/examples/rime/example-abc.eval-adf7xxxmb4z.srec

Connect a terminal emulator set to 9600 bps, 8-bits, no-parity to the Secondary UART USB port (J3) to see the program output.

On Windows:
-----------

Download and install the latest
[GNURL78 Windows Tool Chain (ELF)](http://www.kpitgnutools.com/latestToolchain.php)
from KPIT (registration required).

Download and install
[GNU coreutils](http://gnuwin32.sourceforge.net/downlinks/coreutils.php) and
[sed](http://gnuwin32.sourceforge.net/downlinks/sed.php).

Obtain the Contiki source code using [git](http://git-scm.com/download/win):

	git clone -b rl78-dev https://github.com/hexluthor/contiki.git

Alternatively, download a
[zip file](https://github.com/hexluthor/contiki/archive/rl78-dev.zip)
of the latest source.

Build Contiki's example-abc using the RL78 Toolchain shell.
Click Start -> All Programs -> GNURL78v13.02-ELF -> rl78-elf Toolchain.

	set PATH=%PATH%;C:\Program Files\GnuWin32\bin
	make -C contiki/examples/rime TARGET=eval-adf7xxxmb4z CROSS_COMPILE=rl78-elf- example-abc.eval-adf7xxxmb4z.srec

Flash the output file `example-abc.eval-adf7xxxmb4z.srec` using the
[Renesas Flash Programmer](http://am.renesas.com/products/tools/flash_prom_programming/rfp)
(registration required).

Connect a terminal emulator (e.g. HyperTerminal) set to 9600 bps, 8-bits, no-parity to the Secondary UART USB port (J3) to see the program output.
