#include "main.h"

/**
 * _strcat - function
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: pointer to string
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x])
		x++;

	for (y = 0; src[y]; y++)
		dest[x++] = src[y];

	return (dest);
}
