#include "main.h"
/**
 * print_times_table - prints the (n) times table, starting with 0.
 * @n: given number from main
 *
 * Return: void.
*/
void print_times_table(int n)
{
	int first, second, result;

	if (n >= 0 && n < 15)
	{
		for (first = 0; first <= n; first++)
		{
			_putchar('0');
			for (second = 1; second <= n; second++)
			{
				result = second * first;
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + 48);
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
				else
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
					_putchar((result % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
