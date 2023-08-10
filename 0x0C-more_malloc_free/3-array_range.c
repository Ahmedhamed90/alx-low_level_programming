#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: starting int
 * @max : max int
 *
 * Return : array of int
*/

int *array_range(int min, int max)
{
	int l, x;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (!ptr)
		return (NULL);
	for (x = 0; x < l; x++)
		ptr[x] = min++;
	return (ptr);
}
