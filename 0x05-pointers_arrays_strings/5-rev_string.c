#include "main.h"

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

	/*find string length without null cahr*/
	for (z = 0; s[z] != '\n'; ++z)
		;

	/*swap the string by looping to half the string*/
	for (x = 0; x < z / 2; x++)
	{
		tem = s[x];
		s[x] = s[z - 1 - x]; /*-1 because th array starts from 0*/
		s[z - 1 - x] = tem;
	}
}
