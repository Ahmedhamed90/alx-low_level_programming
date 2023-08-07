#include "main.h"

/**
 * wordcnt - counts the number
 *
 * @s: string to count
 *
 * Return: int of number of words
*/

int wordcnt(char *s)
{
	int z, x = 0;

	for (z = 0; s[z]; z++)
	{
		if (s[z] == ' ')
		{
			if (s[z + 1] != ' ' && s[z + 1] != '\0')
				x++;
		}
		else if (z == 0)
			x++;
	}
	x++;
	return (x);
}

/**
 * **strtow - splits a string into
 *
 * @str: tring to split
 *
 * Return: pointer
*/

char **strtow(char *str)
{
	int z, x, c, v, b = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	b = wordcnt(str);
	if (b == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[b - 1] = NULL;
	z = 0;
	while (str[z])
	{
		if (str[z] != ' ' && (z == 0 || str[z - 1] == ' '))
		{
			for (x = 1; str[z + x] != ' ' && str[z + x]; x++)
				;
			x++;
			w[wc] = (char *)malloc(x * sizeof(char));
			x--;
			if (w[wc] == NULL)
			{
				for (c = 0; c < wc; c++)
					free(w[c]);
				free(w[b - 1]);
				free(w);
				return (NULL);
			}
			for (v = 0; v < x; v++)
				w[wc][v] = str[z + v];
			w[wc][v] = '\0';
			wc++
				z += x;
		}
		else
			z++;
	}
	return (w);
}
