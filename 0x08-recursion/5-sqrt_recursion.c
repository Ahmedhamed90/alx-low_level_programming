#include "main.h"

/**
 * _sqrt_recursion - a natural square root
 *
 * @n: int
 *
 * Return: int
*/

int _sqrt_recursion(int n)
{
	int x;

	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (n, x + 1);
	}
	else
		return (-1);
}
