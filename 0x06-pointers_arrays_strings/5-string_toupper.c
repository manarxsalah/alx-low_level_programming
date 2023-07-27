#include "main.h"

/**
 * *string_toupper - changes all lowecase letters of a string to upper.
 *
 * @str: a string to return.
 *
 * Return: str
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
