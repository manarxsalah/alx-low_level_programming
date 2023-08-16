#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a param
 *			on each element of an array
 * @array: the int array
 * @size: the size of the array
 * @action: a pointer to the function
 * Result: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = &array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
