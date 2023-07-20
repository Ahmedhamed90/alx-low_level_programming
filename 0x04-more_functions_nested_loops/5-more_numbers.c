#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int x, c, v;

	for (x = 1; x <= 10; x++)
	{
		for (c = 0; c <= 14; c++)
		{
			v = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				v = c % 10;
			}
			_putchar(v + 48);
		}
		_putchar('\n');
	}
}
