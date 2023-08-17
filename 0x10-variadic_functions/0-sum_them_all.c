#include "variadic_functions.h"
/**
 * sum_them_all - sums variable args
 * @n: no. of args
 * @...: ints to sum
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list calc;

	if (n == 0)
		return (0);
	va_start(calc, n);
	while (i--)
		s += va_arg(calc, int);
	va_end(calc);
	return (s);
}
