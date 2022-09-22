#include "main.h"
#include <stdio.h>

/**
* print_buffer - Prints a buffer
* @b: char
* @size: in
* Return:  Return void
*/
void print_buffer(char *b, int size)
{
int x, k;
	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);
		for (k = 0; k < 10; k++)
		{
			if ((k + x) >= size)
				printf("  ");
			else
				printf("%02x", *(b + k + x));
			if ((k % 2) != 0 && k != 0)
				printf(" ");
		}
		for (k = 0; k < 10; k++)
		{
			if ((k + x) >= size)
				break;
			else if (*(b + k + x) >= 31 &&
				 *(b + k + x) <= 126)
				printf("%c", *(b + k + x)
			else
				printf(".");
		}
		if (x >= size)
			continue
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}

