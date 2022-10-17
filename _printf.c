#include "main.h"
#include <stdarg.h>
#include <unistd.h>

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
		{"i", print_int}
	};

	va_start(args, format);
	for (; format && format[i]; i++)
	{
		if (format[i] != '%' && format[i - 1] != '%')
			sum += _putchar(format[i]);
		else if (format[i] == '%' && format[i - 1] == '%')
			sum += _putchar(format[i]);
		else if (format[i - 2] == '%' && format[i - 1] == '%')
			sum += _putchar(format[i]);
		else
		{
			for (j = 0; j < 4; j++)
			{
				if (*(format + i + 1) == *(funcs[j].symbol))
				{
					sum += funcs[j].print(args);
					break;
				}
			}
		}
	}
	va_end(args);
	return (sum);
}
