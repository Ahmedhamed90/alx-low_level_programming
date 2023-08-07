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
	int i, j, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wordcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[c]);
				free(w[b - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++
				i += j;
		}
		else
			i++;
	}
	return (w);
}
