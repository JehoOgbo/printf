#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

char *reverse(char *s);
/**
 * print_char - prints input char
 * @arg: argument to be printed
 *
 * Return: number of characters printed
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);
	char *s = &c;

	write(1, s, 1);
	return (1);
}

/**
 * strlen - finds the length of a string
 * @c: input string
 *
 * Return: length of string
 */
int _strlen(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
		;
	return (i);
}

/**
 * print_str - prints a string
 * @arg: input string
 *
 * Return: number of characters printed
 */
int print_str(va_list arg)
{
	char *d = va_arg(arg, char*);
	int n;

	n = _strlen(d);
	write(1, d, n);
	return (n);
}

/**
 * print_perc - prints percent character
 * @arg: character to be printed
 *
 * Return: number of characters printed
 */
int print_perc(void)
{
	char c = '%';
	char *s = &c;

	write(1, s, 1);
	return (1);
}

/**
 * count_char - counts how many characters are in an int
 * @n: int whose digits are to be counted
 *
 * Return: amount of characters
 */
int count_char(int n)
{
	int divisor = 1, count = 0;

	/*a = n;*/
	while (n / divisor)
	{
		divisor *= 10;
		count++;
	}
	return (count);
}

/**
 * itoa - convert n to characters
 * @n: number to be converted
 * @s: string to input characters
 */
char *itoa(int n)
{
	int i, sign, a;
	char *s, *c;

	if ((sign = n) < 0)
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
	i = 0;
	do {
		s[i++] = n % 10 + '0';
		/*i++;remove*/
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	c = reverse(s);
	return (c);
}

/**
 * reverse - reverse string in place
 * s: string to be reversed
 *
 * Return: void
 */
char *reverse(char *s)
{
	int c, i, j;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	return (s);
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
