#include "main.h"

/**
 * _putchar - for writing the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success returns 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
