#include "main.h"

/**
 * _mset - fille memory
 *
 * @s: pointer
 * @b: constant
 * @n: max bytes
 *
 * Return: s
*/

cha *_mset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - allocates memory
 *
 * @nmemb: array
 * @size: size
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_mset(m, 0, sizeof(int) * nmemb);

	return (m);
}
