#include "main.h"
/**
 * print_unsigned - print number.
 * @n: the number to print.
 * Return: number of characters printed.
 *
 */
int print_unsigned(unsigned int n)
{
unsigned int diviser = 1, i, digit;
int iterations = 0;

while (n / diviser > 9)
diviser *= 10;

for (i = diviser; i >= 1; i /= 10)
{
digit = (n / i) % 10;
iterations += _putchar(digit + '0');
}

return (iterations);
}
