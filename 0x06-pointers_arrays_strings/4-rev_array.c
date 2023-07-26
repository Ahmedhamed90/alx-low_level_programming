#include "main.h"

/**
 * reverse_array - reverses the contact of an array
 *
 * @a: an array
 * @n: the nubmer
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int z, x, c;

	for (z = 0, x = (n - 1); z < x; z++, x--)
	{
		c = a[z];
		a[z] = a[x];
		a[x] = c;
	}
}
