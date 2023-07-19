#include "main.h"
/**
 * print_last_digit - print and return the last digit of given number.
 *
 * @n: the number to check.
 *
 * Return: the last digit.
*/
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 1)
	{
		n = n * -1;
	}
	_putchar(n + 48);
	return (n);
}
