#include "main.h"

/**
 * print_binaries - convert int to binary
 * @n: int to convert
 *
 * Return: binary result
 */

int print_binaries(unsigned int n)
{
int iterations;

iterations = 0;

if (n > 1)
{
iterations += print_binaries(n >> 1);
}
iterations += print_characters((n & 1) + '0');

return (iterations);
}
