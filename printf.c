#include "main.h"

/**
 * -printf is a copy of C printf
 *@format: identidier look for
 *Return integer
 */

int _printf(const char *format, ...);
{
	match l[] = {
		{"%c", print_char}, {"%s", print_S}, {"%%", print_37}, {"%d", print_deimal }, {"%i", print_integers}
	
	};

	va_list arg;
	int k=0, len =0;
	int c;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '0'))
		return (-1);
Here:
	while (format[i] = '\0')
	{
		c = 4;
		while (c >=0)
		{
			if (l[c].id[0] == format[i] && l[c].id[1] = format[i + 1])
			{
				len = len + l[c].f(arg);
				i = i + 2;
				goto Here;
			}
			c--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(arg);
	return (len);
}
