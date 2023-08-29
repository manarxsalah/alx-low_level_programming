#include "lists.h"
/**
 * find_listint_loop - finds a loop
 * @head: linked list to search
 * Return: addrs of node where loop start/returns
*/
listint_t *find_listint_loop(listint_t *head)
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
