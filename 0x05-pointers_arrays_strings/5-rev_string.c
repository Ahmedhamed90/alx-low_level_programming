#include "main"

/**
 * rev_string - reverse a strinf
 *
 * @s: string
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int z, x;
	char tem;

	for (z = 0; s[z] != '\n'; ++z)
		;

	for (x = 0; x < z / 2; x++)
	{
		tem = x[x];
		s[x] = s[z - 1 - x];
		s[z - 1 - x] = tem;
	}
}
