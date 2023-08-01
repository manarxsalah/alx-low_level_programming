#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: starting address.
 * @accept: char
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
