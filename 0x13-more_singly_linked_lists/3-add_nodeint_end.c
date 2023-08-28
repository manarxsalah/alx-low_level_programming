#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: pointer to first node
 * @n: value for end node
 * Return: pointer to end node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (head == 0 || end_node == 0)
		return (0);

	end_node->next = 0;
	end_node->n = n;
	if (*head == 0)
		*head = end_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = end_node;
	}
	return (end_node);
}
