#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, result = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result = result + i;
		}
	}
	printf("%d\n", result);
	return (0);
}
