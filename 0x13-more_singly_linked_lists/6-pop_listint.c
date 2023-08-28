#include "lists.h"

/**
 * pop_listint - pops head
 * @head: address
 * Return: value
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int z;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	z = (*head)->z;
	free(*head);
	*head = node;
	return (z);
}
