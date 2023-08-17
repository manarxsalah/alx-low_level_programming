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
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
