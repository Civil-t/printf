#include "main.h"

/**
 * prints_S - prints a string
 * @str: string to input
 * Return: input string
 *
 */

int prints_S(char *str)
{
int iterations;

iterations = 0;

if (str == NULL)
{
return (-1);
}
while (*str != '\0')
{
if (*str == '\n')
{
iterations += _putchar('\\') + _putchar('x') +
_putchar('0') + _putchar('A');
} else if (*str < 32 || *str >= 127)
{
iterations += _putchar('\\');
iterations += _putchar('x');
iterations += print_hexadecimals(*str, 1);
} else
{
iterations += _putchar(*str);
}
str++;
}
return (iterations);
}
