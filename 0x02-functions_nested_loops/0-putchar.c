#include "main.h"
/**
 * main - writes "_putchar" to stdout.
 * @hi[]: The characters to print.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char hi[] = "_putchar";
	int i = 0;

	while (hi[i] != '\0')
	{
		_putchar(hi[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
