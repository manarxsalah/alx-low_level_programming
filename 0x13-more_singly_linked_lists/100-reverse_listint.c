#include "lists.h"
/**
 * reverse_listint - reverses a listint_t
 * @head: addrs of ptr to first node
 * Return: addrs of head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_int *node = 0, *next = 0;

	if (head == 0 || *head == 0)
		return (0);

	node = *head;
	*head = 0;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
