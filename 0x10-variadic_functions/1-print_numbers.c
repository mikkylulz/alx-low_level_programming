#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_numbers - prints all numbers with a separator
* @separator: separe numbers
* @n: int, number of undefined arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list arg_ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg_ptr, n);
	while (x < n)
	{
		if (x != 0 && separator)
			printf("%s", separator);
		printf("%d", (int)va_arg(arg_ptr, int));
		x++;
	}
	va_end(arg_ptr);
	printf("\n");
}
