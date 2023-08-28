#include "lists.h"
/**
 * pop_listint - deletes the head node, and return the head node's data
 * @head: addrs of ptr to first node
 * Return: head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == 0 || *head == 0)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
