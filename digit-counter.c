#include "main.h"

/**
 * count_char - counts how many digits an int is
 * @n: int whose digits are to be counted
 *
 * Return: amount of characters
 */
int count_char(int n)
{
	int divisor = 1, count = 0;

	while (n / divisor)
	{
		divisor *= 10;
		count++;
	}
	return (count);
}
