#include "lists.h"
/**
 * _r - reallocates memory
 * @ls: the old list to append
 * @sz: size of the new list
 * @new: new node
 * Return: ptr to the new list
*/
const listint_t **_r(const listint_t **ls, size_t sz, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(sz * sizeof(listint_t *));
	if (!newlist)
	{
		free(ls);
		exit(98);
	}
	for (i = 0; i < sz - 1; ++i)
		newlist[i] = ls[i];
	newlist[i] = new;
	free(ls);
	return (newlist);
}
/**
 * print_listint_safe - prints a listint_t
 * @head: ptr to the start
 * Return: the no. of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **ls = 0;

	while (head != 0)
	{
		for (i = 0; i < num; ++i)
		{
			if (head == ls[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(ls);
				return (num);
			}
		}
		++num;
		ls = _r(ls, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(ls);
	return (num);
}
