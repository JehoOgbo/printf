#include "main.h"

/**
 * print_rot13 - code input in rot 13 then print it
 * @arg: input string
 *
 * Return: number of characters printed
 */
int print_rot13(va_list arg)
{
	char *c, *s = va_arg(arg, char *);
	unsigned int i, len;

	c = rot13(s);
	len = _strlen(c);
	while (c[i])
		_putchar(c[i++]);
	return (len);
}
