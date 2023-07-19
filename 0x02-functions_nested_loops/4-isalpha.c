#include "main.h"
/**
 * _isalpha - check if the character is alphabet.
 *
 * @c: the character to check.
 *
 * Return: 1 if alphabet, otherwise 0.
*/
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
