#include "main.h"

/**
 *
 * print_hexadecimals - prints a number in hexadecimal
 * @n: number to be printed
 * @uppercase: uppercase chars
 * Return: hexadecimal chars
 */

int print_hexadecimals(unsigned long int n, int uppercase)
{
char hexs[] = "0123456789abcdef";
int counts = 0;

if (n / 16)
{
counts += print_hexadecimals(n / 16, uppercase);
}
if (uppercase)
{
counts += _putchar(hexs[n % 16] - 32 * (n % 16 > 9));
}
else
{
counts += _putchar(hexs[n % 16]);
}

return (counts);
}
