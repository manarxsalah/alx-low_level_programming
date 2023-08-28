#include "lists.h"
/**
 * free_listint2 - frees a list of int nodes
 * @head: addrs of ptr to first node
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (head == 0)
		return;

	node = *head;
	while (node)
	{
		tmp = node;
		node = node->next;
	       free(tmp);
	}
	*head = 0;
}
