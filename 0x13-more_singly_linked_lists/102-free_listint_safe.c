#include "lists.h"
/**
 * find_list - finds a loop in a linked list
 * @head: linked list to search
 * Return: addrs of node where loop starts/returns, 0 (if no loop)
*/
listint_t *find_list(listint_t *head)
{
	listint_t *ptr, *end;

	if (!head)
		return (0);

	for (end = head->next; end != 0; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (0);
}
/**
 * free_listint_safe - free a listint
 * @h: head of list
 * Return: no. of nodes freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t len;
	int loop = 1;

	if (!h || !*h)
		return (0);

	loopnode = find_list(*h);
	for (len = 0; (*h != loopnode || loop) && *h != 0; *h = next)
	{
		++len;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			++len;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
