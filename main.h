#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/* print according to a certain format */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);

/* printing individual characters */
int print_characters(char e);

/* printing an individual integer */
int print_integers(int n);

/*printing a % sign*/
int print_percents(void);

/*printing strings*/
int print_strings(char *str);

#endif
