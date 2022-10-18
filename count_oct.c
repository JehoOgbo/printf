#include "main.h"

/**
 * count_oct - counts amount of octal numbers needed
 * @o: number to be converted
 *
 * Return: number of octal digits
 */
unsigned int count_oct(unsigned int o)
{
	unsigned int count = 0;

	while (o > 0)
	{
		o /= 8;
		count++;
	}
	return (count);
}
