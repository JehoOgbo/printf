#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * int_to_binary - converts a decimal number to binary
 * @n: number to be converted
 *
 * Return: character array containing binary digits
 */
char *int_to_binary(unsigned int n)
{
	unsigned int i = 0, a;
	char *s, *c;

	a = count_binary(n);
	s = malloc(sizeof(char) * (a + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	do {
		s[i++] = n % 2 + '0';
	} while (n /= 2);
	s[i] = '\0';
	c = reverse(s);
	return (c);
}
/**
 * print_binary - converts a decimal to binary and prints it out
 * @arg: integer argument gotten from variadic function
 *
 * Return: number of characters to be printed
 */
int print_binary(va_list arg)
{
	char *c;
	unsigned int a, len;

	a = va_arg(arg, unsigned int);
	c = int_to_binary(a);
	len = _strlen(c);
	write(1, c, len);
	free(c);
	return (len);
}
