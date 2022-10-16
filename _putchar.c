#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a single char
 * @c: character to be printed
 *
 * Return: number of characters printed
 */
int _putchar(char c)
{
	char *s;

	s = &c;
	write(1, s, 1);
	return (1);
}
