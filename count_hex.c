#include "main.h"

/**
 * count_hex - count the number of hexadecimal digits needed
 *
 * @h: number to be converted to hex
 * Return: number of hexadecimal digits
 */
unsigned int count_hex(unsigned int h)
{
	unsigned int count = 0;

	while (h > 0)
	{
		h /= 16;
		count++;
	}
	return (count);
}
