#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * print_str - prints a string
 * @arg: input string
 *
 * Return: number of characters printed
 */
int print_str(va_list arg)
{
	char *d = va_arg(arg, char *);
	unsigned int i = 0, n;

	n = _strlen(d);
	while (d[i])
		_putchar(d[i++]);
	/*write(1, d, n);*/
	return (n);
}
