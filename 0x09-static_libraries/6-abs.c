#include "main.h"
/**
 * _abs - return the absolute value of given number.
 *
 * @n: the number to check.
 *
 * Return: the absolute value.
*/
int _abs(int n)
{
	if (n < 1)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
