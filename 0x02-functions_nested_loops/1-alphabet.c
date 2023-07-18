#include "main.h"

/**
 * * main - Entry point
 *
 * Description: print _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
