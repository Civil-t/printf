#include "main.h"

/**
 * print_pointers - show ptr value
 * @ptr: ptr value
 * Return: ptr value
 *
 */

int print_pointers(void *ptr)
{
unsigned long int address = (unsigned long int)ptr;
int counts = 0;

if (ptr == NULL)
{
return (-1);
}

counts += _putchar('0');
counts += _putchar('x');
counts += print_hexadecimals(address, 0);

return (counts);
}
