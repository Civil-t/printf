#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_number(int number, int *count);
int print_norm(const char *text, int *count);
int print_str(const char *str, int *count);
int _printf_(const char *format, ...);

#endif
