#include "lists.h"

/**
 * list_len - determines
 *
 * @h: pointer
 *
 * Return: size
 */

size_t list_len(const list_ *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
