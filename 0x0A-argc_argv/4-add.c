#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
*
* @argc: number of arguments
*
* @argv: array of arguments
*
* Return: Return 0 on success, Return 1 on failure
*/

int main(int argc, char *argv[])
{
	int i, j, total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[i]);
	}

	printf("%d\n", total);

	return (0);
}
