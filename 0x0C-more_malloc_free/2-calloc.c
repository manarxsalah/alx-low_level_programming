#include "main.h"
/**
 * *_memset - fills memory with const byte
 * @s: memory area to be filled
 * @b: char to cp
 * @n: num of times to cp b
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * *_calloc - function that allocates memory for an array
 *		using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(size * nmemb);

	if (p == 0)
		return (0);

	_memset(p, 0, nmemb * size);

	return (p);
}
