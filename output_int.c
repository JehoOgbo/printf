#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * itoa - convert n to character array
 * @n: number to be converted
 *
 * Return: character array formed
 */
char *itoa(int n)
{
	int i = 0, sign, a;
	char *s, *c;

	sign = n;
	if ((sign) < 0)
		n = -n;
	a = count_char(n);
	if (sign < 0)
	{
		s = malloc(a + 2);
		if (s == NULL)
			return (NULL);
	}
	else
	{
		s = malloc(a + 1);
		if (s == NULL)
			return (NULL);
	}
	do {
		s[i++] = n % 10 + '0';
		i++;
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	c = reverse(s);
	return (c);
}
/**
 * print_int - prints an integer
 * @arg: integer argument to be printed
 *
 * Return: number of characters printed
 */
int print_int(va_list arg)
{
	int a, len;
	char *c;

	a = va_arg(arg, int);
	c = itoa(a);
	len = _strlen(c);
	write(1, c, len);
	return (len);
}
