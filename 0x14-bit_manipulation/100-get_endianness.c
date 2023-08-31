#include "main.h"
/**
 * get_endianness - returns the endianness of the system
 * Return: 0 (big), 1 (small)
*/
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
