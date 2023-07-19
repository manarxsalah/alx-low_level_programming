#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
	int first, second, result;

	for (first = 0; first < 10; first++)
	{
		_putchar('0');
		for (second = 1; second < 10; second++)
		{
			result = second * first;
			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + 48)
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
