#include "main.h"

/**
 * *_strcpy - copies the string
 *
 * @dest: char type string
 * @src: char type string
 *
 * Descripion: copy the string 
 *
 * Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int s = -1;

	do {
		s++;
		dest[s] = src[s];
	} while (src[s] != '\0');

	return (dest);
}
