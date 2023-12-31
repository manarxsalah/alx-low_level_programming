#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination.
 * @src: pointer to source.
 * @n: most number of bytes from @src.
 *
 * Return: @dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
