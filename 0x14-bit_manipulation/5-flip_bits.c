#include "main.h"

/**
 * flip_bits - flip bit
 *
 * @n: first number
 * @m: second number
 *
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xyz = n ^ m;
	unsigned int cou = 0;

	while (xyz)
	{
		if (xyz & 1ul)
			cou++;
		xyz = xyz >> 1;
	}
	return (cou);
}
