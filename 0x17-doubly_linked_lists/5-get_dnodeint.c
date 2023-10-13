#include "lists.h"
/**
 * get_dnodeint_at_index - returns node at given idx
 * @head: ptr to curr head node
 * @index: idx to node to return
 * Return: addrs of node at idx
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
