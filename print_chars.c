#include <unistd.h>

/**
 * print_characters - prints individual characters to stdio
 * @e: the character to print
 * Return: 1 (when successful), -1 (when failed)
 *
 */
int print_characters(char e)
{
return (write(1, &e, 1));
}
