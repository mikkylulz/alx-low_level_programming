#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*
*/

int main(int argc, char *argv[])
{
	int i, j;

	/* @p is a function pointer that point to the given operation */

	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((p == op_div || p == op_mod) && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(i, j));
	return (0);
}
