
#include <unistd.h>

#include "uart0.h"

int write(int fd, const void *buf, size_t count) {
	size_t n;
	for (n=0; n<count; n++) uart0_putchar(((const char*)buf)[n]);
	return count;
}
