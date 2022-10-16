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
	char *c, d;
	printer funcs[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_perc},
		{"d", print_int},
		{"i", print_int}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		if (format[i] != '%' && format[i - 1] != '%')
		{
			d = format[i];
			c = &d;
			write(1, c, 1);
			sum++;
		}
		else if (format[i - 2] == '%' && format[i - 1] == '%')
		{
			d = format[i];
			c = &d;
			write(1, c, 1);
			sum++;
		}
		else
		{
			while (j < 5)
			{
				if (*(format + i + 1) == *(funcs[j].symbol))
				{
					sum += funcs[j].print(args);
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (sum);
}
