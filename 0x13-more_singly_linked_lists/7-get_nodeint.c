#include "lists.h"

/**
 * get_nodeint_at_index - node at index
 * @head: pointer
 * @index: index of node
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int z;

	for (node = head, z = 0; node && z < index; node = node->next, z++)
		;
	return (node);
}
