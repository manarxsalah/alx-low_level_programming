#include "main.h"

/**
 * print_alphabet - writes alphabet to stdout.
 *
 * Return: void
*/

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
