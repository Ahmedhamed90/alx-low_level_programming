#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _r - realloctes memory
 *
 * @list: node
 * @size: size
 * @new: new node
 *
 * Return: pointer
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t x;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		newlist[x] = list[x];
	newlist[x] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - print
 * @head: pointer
 * Return: the number
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x, y = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < y; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (y);
			}
		}
		y++;
		list = _r(list, y, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (y);
}
