#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - return a pointer to a newly allocated space
 * in memory which contains a cp of the str given as a param
 * @str: string
 * Return: 0
*/
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == 0)
		return (0);

	for (; str[size] != '\0'; size++)
		;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
