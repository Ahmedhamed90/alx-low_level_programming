#include "main.h"

/**
 * print_last_digit - print last of number
 *
 * @n: takes number input
 *
 * Return: lastdigit
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;

	_putchar(x + '0');
	return (x);
}
