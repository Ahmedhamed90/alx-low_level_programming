#include "main.h"

/**
 * string_nconcat - concatenates two string
 *
 * @s1: pointer
 * @s2: pointer
 * @n: Number
 *
 * Return: pointer to space
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, c, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];

	for (c = 0; c < n; c++)
	{
		str[x] = s2[c];
		x++;
	}

	str[x] = '\0';
	return (str);
}
