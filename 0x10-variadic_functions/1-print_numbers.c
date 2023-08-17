#include "variadic_fuctions.h"
/**
 * print_numbers - prints numbers with seperator
 *			followed by a new line
 * @separator: the str seperator
 * @n: no. of args
 * @...: ints to print
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list calc;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(calc, n);
	while (i--)
		printf("%d%s", va_arg(calc, int),
				i ? (separator ? separator : "") : "\n");
	va_end(calc);
}
