#include "main.h"

/**
 * print_alphabet_x10 - writes alphabet 10 times to stdout.
 *
 * Return: void.
*/
void print_alphabet_x10(void)
{
	int i, o = 0;

	while (o < 10)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		o++;
	}
}
