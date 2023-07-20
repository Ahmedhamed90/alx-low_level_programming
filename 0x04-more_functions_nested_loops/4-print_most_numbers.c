#include "main.h"

/**
 * print_numbers - print 0 - 9 only use _putchar twice in  code
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar(x + 48);
	}
	_putchar('\n');
}
