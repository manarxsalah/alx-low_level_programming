#include "variadic_functions.h"
/**
 * print_strings - prints str with seperator
 *			followed by a newline
 * @separator: str seperator
 * @n: no. of args
 * @...: str to print
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list calc;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(calc, n);
	while (i--)
		printf("%s%s", (str = va_arg(calc, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(calc);
}
