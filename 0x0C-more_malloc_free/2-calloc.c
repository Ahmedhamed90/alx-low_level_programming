#include "main.h"

/**
 * _mset - fille memory
 *
 * @S: pointer
 * @b: constant
 * @n: max bytes
 *
 * Return: S
*/

char *_mset(char *S, char b, unsigned int n)
{
	char *ptr = S;

	while (n--)
		*S++ = b;

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
