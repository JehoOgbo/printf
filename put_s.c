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
	int n;

	n = _strlen(d);
	write(1, d, n);
	return (n);
}
