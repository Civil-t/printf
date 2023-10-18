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
case 's':
return (print_strings(va_arg(args, char *)));
case 'i':
return (print_integers(va_arg(args, int)));
case 'c':
return (print_characters(va_arg(args, int)));
case '%':
return (print_percents());
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
int iterations, i;

iterations = 0, i = 0;
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
iterations += handle_specifier(format[i], args);
}
else
iterations += character_print(format[i]);
i++;
}
va_end(args);
return (iterations);
}
