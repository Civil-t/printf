#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: A pointer to a string.
 * Return: i
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc - Strlen function with an applied constant char pointer str
 * @str: char pointer
 * Return: i
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
} 
