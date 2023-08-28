#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of list
 * @head: pointer to first node
 * @n: value of new node
 * Return: poiner to new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == 0 || new_node == 0)
		return (0);

	new_node->next = 0;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
