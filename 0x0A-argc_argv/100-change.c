#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum
 * @argc: number
 * @argv: pointer
 * Return: 0 or non
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, y = 0, z = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (z >= cents[i])
			{
				y += z / cents[i];
				z = z % cents[i];
				if (z % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
