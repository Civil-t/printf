#include "main.h"

/**
 * print_integers - print an individual inteher to stdio
 * @n: the int
 * Return: number of chars
 */
int print_integers(int n)
{
unsigned int number;
int iterations;

iterations = 0;
if (n < 0)
{
iterations += print_characters('-');
number = -n;
}
else
{
number = n;
}
if (number / 10)
{
iterations += print_integers(number / 10);
}
iterations += print_characters((number % 10) + '0');
return (iterations);
}
