#include "main.h"
/**
 * _islower - check if the character is lowercase.
 *
 * @c: the character to check.
 *
 * Return: 1 if lowercase, otherwise 0.
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
