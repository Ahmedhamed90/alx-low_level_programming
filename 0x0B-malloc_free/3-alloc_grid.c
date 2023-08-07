#include "main.h"

/**
 * **alloc_grid - returns a pointer
 *
 * @width: int
 * @height: int
 * Return: 2d array
*/

int **alloc_grid(int width, int height)
{
	int **tab, z, x;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (z = 0; z < height; z++)
		{
			tab[z] = malloc(sizeof(**tab) * width);
			if (tab[z] == 0)
			{
				while (z--)
					free(tab[z]);
				free(tab);
				return (NULL);
			}

			for (x = 0; x < width; x++)
				tab[z][x] = 0;
		}
	}

	return (tab);
}
