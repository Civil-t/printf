#include "main.h"

/**
 * handle_specifier - handles character specifiers
 * @specifier: the specifier character
 * @args: the list of arguments
 * Return: the total number of characters printed
 */
int handle_specifier(char specifier, va_list args)
{
switch (specifier)
{
case 'x':
return (print_hexadecimals(va_arg(args, unsigned long int), 0));
case 'X':
return (print_hexadecimals(va_arg(args, unsigned long int), 1));
case 's':
return (print_strings());
case 'd':
case 'i':
return (print_integers(va_arg(args, int)));
case 'c':
return (print_characters(va_arg(args, int)));
case '%':
return (print_percents());
case 'u':
return (print_unsigned(va_arg(args, unsigned int)));
case 'b':
return (print_binaries(va_arg(args, unsigned int)));
case 'o':
return (print_octals(va_arg(args, unsigned int)));
case 'S':
return (prints_S(va_arg(args, char *)));
case 'p':
return (print_pointers(va_arg(args, void *)));
default:
return (print_characters('%') + print_characters(specifier));
}
}

/**
 * _printf - print the output according to a format
 * @format: the string format
 * Return: the total number of characters printed
 *
 */
int _printf(const char *format, ...)
{
va_list	args;
int iteration, i;

iteration = 0, i = 0;
if (format == NULL)
{
return (-1);
}
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
iteration += handle_specifier(format[i], args);
}
else
iteration += print_characters(format[i]);
i++;
}
va_end(args);
return (iteration);
}
