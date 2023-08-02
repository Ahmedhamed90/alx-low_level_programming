#include "main.h"

/**
 * _print_rev_recursion - pointer
 *
 * @s: pointer a string
 *
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	for (char s = '\0'; s >= 0; s++)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
