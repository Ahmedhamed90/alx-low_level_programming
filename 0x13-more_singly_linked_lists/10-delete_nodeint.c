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

	if (!hahead
