#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given idx
 * @head: addrs of ptr to first node
 * @index: idx of node to delete
 * Return: 1 (Success), -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curNode, *prevNode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		curNode = *head;
		*head = (*head)->next;
		free(curNode);
		return (1);
	}
	curNode = *head;
	while (curNode)
	{
		if (i == index)
		{
			prevNode->next = curNode->next;
			free(curNode);
			return (1);
		}
		++i;
		prevNode = curNode;
		curNode = curNode->next;
	}
	return (-1);
}
