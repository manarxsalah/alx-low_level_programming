#include "main.h"
/**
 * array_range - a function that creates an array of ints
 * @min: starting int
 * @max: max int
 * Return: array of ints
*/
int *array_range(int min, int max)
{
	int lgth, i;
	int *p;

	if (min > max)
		return (NULL);
	lgth = max - min + 1;
	p = malloc(sizeof(int) * lgth);
	if (p == 0)
		return (NULL);
	for (i = 0; i < lgth; i++)
		p[i] = min++;
	return (p);
}
