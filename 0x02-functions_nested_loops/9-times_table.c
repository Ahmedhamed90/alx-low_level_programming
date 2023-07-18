#include "main.h"

/**
 * times_table - print the 9 times table
*/

void times_table(void)
{
	int a, s, d;

	for (a = 0; a <= 9; a++)
	{
		_putchar(0);
		for (s = 0; s <= 9; s++)
		{
			_putchar(',');
			_putchar(' ');

			d = a * s;

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + 48);
			_putchar((d % 10) + 48);
		}
		_putchar('\n');
	}
}
