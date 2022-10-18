#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _printf - prints formatted output
 * @format: string to be formatted and printed
 *
 * Return: number of characters to be printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, sum = 0;
	printer funcs[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"u", print_unsigned}
	};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))/*check for NULL char*/
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (; format && format[i]; i++)
	{
		if (format[i] != '%' && format[i - 1] != '%')
			sum += _putchar(format[i]);
		else if (format[i] == '%' && format[i - 1] == '%')
			sum += _putchar(format[i]);
		else if (format[i - 2] == '%' && format[i - 1] == '%')
			sum += _putchar(format[i]);
		else
			for (j = 0; j < 6; j++)
			{
				if (*(format + i + 1) == *(funcs[j].symbol))
				{
					sum += funcs[j].print(args);
					break;
				}
			}
	}
	va_end(args);
	return (sum);
}
