#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: addrs of ptr to first node
 * @idx: index to insert new node
 * @n: value of new node
 * Return: addrs of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (0);

	new_node->n = n;
	new_node->next = 0;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		++i;
		node = node->next;
	}
	free(new_node);
	return (0);
}
