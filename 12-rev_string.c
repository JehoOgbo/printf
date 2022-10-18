#include "main.h"

/**
 * rev_erse - creates an array of chars that contains a reversed string
 * @c: string to be reversed
 *
 * Return: new string
 */
char *rev_erse(char *c)
{
	unsigned int i, len, j;
	char *s;

	len = _strlen(c);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0, j = len - 1; i < j; i++, j--)
		s[i] = c[j];
	s[i] = '\0';
	return (s);
}
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
	s = rev_erse(c);
	while (s[i])
		_putchar(s[i++]);
	free(s);
	return(n);
}
