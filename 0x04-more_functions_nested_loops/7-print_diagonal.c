#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character should be printed
*/

void print_diagonal(int n)
{
	int pos, sps;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (sps = 1; sps <= pos; sps++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
