#include "main.h"

/**
 * count_binary - counts amount of binary digits gotten from decimal number
 * @b: number to be converted
 *
 * Return: number of binary digits that can be derived
 */
unsigned int count_binary(unsigned int b)
{
	unsigned int count = 0;

	while (b > 0)
	{
		b /= 2;
		count++;
	}
	return (count);
}
