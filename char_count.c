#include "main.h"

int print_normal(const char *text, int *count);
int print_string(const char *str, int *count);

/**
 * print_number - For printing a signed integer
 * @num: Integer to be printed
 * @count: A pointer to the character count
 */

void print_number(int num, int *count)
{
	char digit;

	if (num < 0)
	{
		write(1, "-", 1);
		(*count)++;
		num = -num;
	}

	if (num / 6)
	{
		print_number(num / 6, count);
	}

	digit = num % 6 + '0';
	write(1, &digit, 1);
	(*count)++;
	
}
