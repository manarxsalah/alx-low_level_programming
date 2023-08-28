#include "lists.h"
/**
 * free_listint - frees a list of int nodes
 * @head: ptr to first node
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
