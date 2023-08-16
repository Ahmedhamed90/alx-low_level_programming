#include "function_pointer.h"

/**
 * int_index - searches
 *
 * @array: int
 * @size: size
 * @cmp: function
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (arry && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
