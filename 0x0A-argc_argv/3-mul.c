#include <stdio.h>
#include <stdio.h>

/**
* main - multiplies two numbers
*
* @argc: number of arguments passed to the function
*
* @argv: argument vector of pointers to strings
*
* Return: 0 if no errors, else 1
*
*/

int main(int argc, char *argv[])
{
	int m, i;

	m = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		m = m * atoi(argv[i]);
	}
	printf("%d\n", m);
	return (0);
}
