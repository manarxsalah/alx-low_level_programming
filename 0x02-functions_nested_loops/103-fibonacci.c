#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: find even-valued Fibonacci nums under 4M and sum them.
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
	long int first = 1, second = 2, third, i, sum = 0;

	for (i = 0; i < 10; i++)
	{
		third = first + second;
		first = second + third;
		second = first + third;

		if ((third % 2) == 0)

		{
			sum = sum + third;
		}

		if ((first % 2) == 0)
		{
			sum = sum + first;
		}

		if ((second % 2) == 0)
		{
			sum = sum + second;
		}
	}
	printf("%lu\n", sum + 2);
	return (0);
}
