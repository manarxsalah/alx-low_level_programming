#include "function_pointers.h"
/**
 * int_index - searches for int
 * @array: the int array
 * @size: the array size
 * @cmp: the function that compares
 * Return: the int index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
