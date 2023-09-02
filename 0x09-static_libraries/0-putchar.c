#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to be printed
 *
 * Return:  1. if success
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
