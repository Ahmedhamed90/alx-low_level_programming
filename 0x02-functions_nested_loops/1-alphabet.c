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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
