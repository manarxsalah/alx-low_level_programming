#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints to 98, starting with given number.
 * @n: given number from main.
 *
 * Return: void.
*/
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; --i)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
