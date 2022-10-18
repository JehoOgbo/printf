#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * itoocta - convert a number to char array
 * @n: number to be converted
 *
 * Return: character array formed
 */
char *itohexa(unsigned int n)
{
	unsigned int i = 0, a;
	char *s, *c, dividend;

	a = count_hex(n);
	s = malloc(sizeof(char) * (a + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	do {
		dividend = n % 16;
		if (dividend > 10)
			dividend += 39;
		s[i++] = dividend + '0';
       	} while ((n /= 16) > 0);
	s[i] = '\0';
	c = reverse(s);
	return (c);
}

/**
 * print_hex - converts decimal to binary and prints it out
 * @arg: integer gotten from variadic function
 *
 * Return: number of characters to be printed
 */
int print_hex(va_list arg)
{
	char *c;
	unsigned int a, len;

	a = va_arg(arg, unsigned int);
	c = itohexa(a);
	len = _strlen(c);
	write(1, c, len);
	free(c);
	return (len);
}
