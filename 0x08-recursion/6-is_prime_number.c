#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - pointer int
 *
 * @n: int
 * @x: int
 *
 * Return: 0 or 1
*/

int check(int n, int x);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * is_prime_number - pointer int
 *
 * @n: int
 * @x: int
 *
 * Return: 0 or 1
*/

int check(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (check(n, x + 1));
}
