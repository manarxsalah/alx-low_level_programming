#include "lists.h"
/**
 * sum_dlistint - sums the value of dlist
 * @head: ptr to curr head node
 * Return: int sum of values
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
