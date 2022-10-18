#include "main.h"

/**
 * print_reverse - prints the reversed string
 * @s: string to be reversed
 *
 * Return: number of characters printed
 */
int print_reverse(va_list arg)
{
	char *s, *c = va_arg(arg, char *);
	unsigned int i = 0, n;

	n = _strlen(c);
	s = reverse(c);
	while (s[i])
		_putchar(s[i++]);
	return(n);
}
