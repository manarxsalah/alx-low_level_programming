#include "lists.h"
/**
 * delete_dnodeint_at_index - del a node from dlistint_t
 * @head: ptr to the head of dlistint_t
 * @index: idx of the node to delete
 * Return: 1 (success), -1 (fails)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
