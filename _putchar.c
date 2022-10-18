#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a single char
 * @c: character to be printed
 *
 * Return: number of characters printed
 */
int _putchar(int c)
{
	int *s;

	s = &c;
	write(1, s, 1);
	return (1);
}
/**int _putchar(int c)
{
	static int i;
	static char buffer[BUF_SIZE];

	if (c == BUF_FLUSH || i >= BUF_SIZE)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buffer[i++] = c;
	return (1);
}*/
