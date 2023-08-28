#include "lists.h"
/**
 * listint_len - returns no. of elements in linked lists
 * @h: pointer to first node
 * Return: size of list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		++i;
	}
	return (i);
}
