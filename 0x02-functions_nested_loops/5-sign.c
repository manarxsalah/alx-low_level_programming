#include "main.h"
/**
 * print_sign - checks the sign of given number.
 *
 * @n: the number to check.
 *
 * Return: 1 if positive, -1 if negative, 0 if zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
