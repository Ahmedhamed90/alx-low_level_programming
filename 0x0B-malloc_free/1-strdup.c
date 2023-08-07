#include "main.h"

/**
 * *_strdup - return a pointer
 *
 * @str: string
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < size; x++)
			m[x] = str[x];
	}
	return (m);
}
