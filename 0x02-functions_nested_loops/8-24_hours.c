#include "main.h"
/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: the last digit.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a < 51; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (b == 52 && a == 50)
			{
				break;
			}
			for (c = 48; c < 54; c++
					{
					for (d = 48; d < 58; d++)
					{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
