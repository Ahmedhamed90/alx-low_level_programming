#include "main.h"

/**
 * _sqrt_recursion - a natural square root
 *
 * @n: int
 * @x: int
 *
 * Return: int
*/

int func(int n, int x);
int _sqrt_recursion(int n)
{
	return (func(n, 1));
}

/**
 * _sqrt_recursion - a natural square root
 *
 * @n: int
 * @x: int
 *
 * Return: int
*/

int func(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (func(n, x + 1));
	}
	else
		return (-1)
}
