#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * ints using the Linear search algorithm
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	while (x < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)x, (int)array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}
	return (-1);
}
