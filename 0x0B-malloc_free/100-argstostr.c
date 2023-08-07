#include "main.h"

/**
 * _strlen - find length of a string
 *
 * @s: string
 *
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - description
 *
 * @ac: int
 * @av: arguments
 *
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int z = 0, nc = 0, x = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; z < ac; z++, nc++)
		nc += _strlen(av[z]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (z = 0; z < ac; z++)
	{
		for (x = 0; av[z][x] != '\0'; x++, cmpt++)
			s[cmpt] = av[z][x];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
