#include "main.h"

/**
 * print_octals - print number as octal
 * @n: the number
 * Return: total digits printed
 *
 */

int print_octals(unsigned int n)
{
int counts;

counts = 0;

if (n / 8)
{
counts += print_octals(n / 8);
}
counts += _putchar((n % 8) + '0');

return (counts);
}
