#include "main.h"

/**
 * print_rev - prints revesed string
 *
 * @s: pointer to the string to print
 *
 * Return: void
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
