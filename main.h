#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;

int _strlen(char *str)
int _strlenc(const char *str)
int print_S(char *str)
int printf_char(va_list val)
int _putchar(char c)
int _printf(const char *format, ...);
int print_37(void);



int _printf_(const char *format, ...);
int print_integers(va_list args);
int print_deimal(va_list args);

#endif
