#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: num of command line arg
 * @argv: pointer to an array of command line arg
 * Return: 0 (sucess), non-zero (fail)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
