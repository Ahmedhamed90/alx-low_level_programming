#include "main.h"

/**
 * clear_bit - clear
 *
 * @n: bit
 * @index: number
 *
 * Return: 1 if successful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
