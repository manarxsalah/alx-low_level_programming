#include "lists.h"
/**
 * add_node - adds a node to the beginning of the list
 * @head: address of ptr to head node
 * @str: str field of node
 * Return: size of list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (head == 0 || new_node == 0)
		return (0);
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (0);
		}
		new_node->len = _strlen(new_node->str);
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
