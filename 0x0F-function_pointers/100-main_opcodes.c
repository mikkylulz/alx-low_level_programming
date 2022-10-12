#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - number of bytes
* @argc: argument counter
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int n, byte;
	int (*code_addr)(int, char **) = main;
	unsigned char code;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (n = 0; n < byte; n++)
	{
		code = *(unsigned char *)code_addr;
		printf("%.2x", code);
		code_addr++;
		if (n != byte - 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
