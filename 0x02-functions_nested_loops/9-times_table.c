#include "main.h"

/**
 * times_table - print the 9 times table
*/

void times_table(void)
{
	int a, s, d;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (s = 1; s <= 9; s++)
		{
			_putchar(',');
			_putchar(' ');

			d = a * s;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + 48); /*get the first digit*/
			_putchar((d % 10) + 48); /*get the secand digit*/
		}
		_putchar('\n');
	}
}
