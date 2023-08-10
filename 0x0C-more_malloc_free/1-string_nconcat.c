#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - a function that concat two strings
 * @s1: ptr to the first str
 * @s2: ptr to the second str
 * @n: no. of bytes from n2 to concat
 *
 * Return: ptr to space in memory containing concat str
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, length1, length2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;
	str = malloc(length1 + n + 1);
	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
