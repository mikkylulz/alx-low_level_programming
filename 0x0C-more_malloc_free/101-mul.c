#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_digit(char *s);
int _strlen(char *s);
void errors(void);
/**
* main -  a program that multiplies two positive numbers
* @argc: the number of arguments
* @argv: an array of strings containing each argument
* Return: returns 0 (success)
*/

int main(int argc, char *argv[])
{
	unsigned long mul;

	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
