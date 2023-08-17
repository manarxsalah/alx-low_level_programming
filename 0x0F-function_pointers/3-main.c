#include "3-calc.h"
/**
 * main - simple calculator
 * @argc: no. of args
 * @argv: array holds values
 * Return: 0 if succes, (98, 99, 100) if failed
*/
int main(int argc, char **argv)
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if argv[2][1]
	{
		pringf("Error\n");
		return (99);
	}
	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
