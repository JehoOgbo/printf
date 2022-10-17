#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_char - prints input char
 * @arg: argument to be printed
 *
 * Return: number of characters printed
 */
int print_char(va_list arg)
{
	unsigned char c = va_arg(arg, int);
	unsigned char *s = &c;

	write(1, s, 1);
	return (1);
}

/**
 * _strlen - finds the length of a string
 * @c: input string
 *
 * Return: length of string
 */
unsigned int _strlen(char *c)
{
	unsigned int i;

	for (i = 0; c[i]; i++)
		;
	return (i);
}
