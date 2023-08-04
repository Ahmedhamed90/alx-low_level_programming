#include "main.h"

/**
 * _strlen - return the length
 *
 * @s: string parameter
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
