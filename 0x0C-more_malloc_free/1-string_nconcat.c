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
	unsigned int i, j, s1_length, s2_length;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	str = malloc(s1_length + n + 1);
	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
