#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_strings - prints all strings with a separator
* @separator: separe strings
* @n: int, number of undefined arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list arg_ptr;
	char *s_arg;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg_ptr, n);
	while (x < n)
	{
		s_arg = va_arg(arg_ptr, char *);
		if (x != 0 && separator != NULL)
			printf("%s", separator);
		if (s_arg != NULL)
			printf("%s", s_arg);
		else
			printf("(nil)");
		x++;
	}
	va_end(arg_ptr);
	printf("\n");
}
