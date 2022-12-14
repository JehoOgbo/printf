#include "main.h"

/**
 * reverse - reverse string in place
 * @s: string to be reversed
 *
 * Return: reversed string
 */
char *reverse(char *s)
{
	unsigned int i, j;
	unsigned char c;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	return (s);
}
