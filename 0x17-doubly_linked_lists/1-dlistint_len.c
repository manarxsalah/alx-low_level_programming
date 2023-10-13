#include "lists.h"
/**
 * dlistint_len - return lgth pf dlist
 * @h: addrs of head
 * Return: size of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
