#include "main.h"

/**
 * _abs - function that computes
 *
 * @n: takes in integer type input function
 *
 * Return: Always 0 (Success)
*/

int _abs(int x)
{
	if (x < 0)
		x = (-1) * x;
	return (x);
}
