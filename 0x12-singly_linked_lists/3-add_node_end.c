#include "lists.h"
/**
 * add_node_end - adds a node to the end of the list
 * @head: address of ptr to head node
 * @str: str field of node
 * Return: size of list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (head == 0 || end_node)
		return (0);
	if (str)
	{
		end_node->str = strdup(str);
		if (!end_node->str)
		{
			free(end_node);
			return (0);
		}
		end_node->len = _strlen(end_node->str);
	}
	if (node)
	{
		while (node->next)
			node = root->next;
		node->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}
