#include "lists.h"
/**
 * _strlen - returns lgth of str
 * @s: str param
 * Return: lgth of str
*/

int _strlen(char *s)
{
	int i = 0;

	if (s == 0)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints a linked list
 * @h: pointer to first node
 * Return: size of list
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!h)
	return (0);
	i = 1;
	while (h->next != 0)
	{
		if (h->str == 0)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	if (h->str == 0)
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);
	return (i);
}
