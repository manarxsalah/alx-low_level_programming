#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 *			and exit if failed.
 * @b: int
 * Return: pointer to the array initialied or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
