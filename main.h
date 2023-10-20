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
int print_strings(void);

/*printing binaries*/
int print_binaries(unsigned int n);

/*printing hexadecimals*/
int print_hexadecimals(unsigned long int n, int uppercase);

/*printing octals*/
int print_octals(unsigned int n);

/*printing S*/
int prints_S(char *str);

/*printig unsigned integers*/
int print_unsigned(unsigned int n);

/*printing pointer value*/
int print_pointers(void *ptr);

#endif
