#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
