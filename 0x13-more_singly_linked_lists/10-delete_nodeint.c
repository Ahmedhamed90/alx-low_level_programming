#include "lists.h"

/**
 * delete_nodeint_at_index - delete
 *
 * @head: address
 * @index: index
 *
 * Return: 1 on success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int x = 0;

	if (!head || *head)
	{
		return (-1);
	}
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (x == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		x++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
