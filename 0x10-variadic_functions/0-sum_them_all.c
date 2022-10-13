#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all -  sum all arguments
* @n: int, number of undefined arguments
*
* Return: sum of args
* On error, 0 is returned
*/



int sum_them_all(const unsigned int n, ...)
{
	va_list args_ptr;
	int n, s = 0;
	unsigned int args = 0;

	va_start(args_ptr, n);
	if (n == 0)
		return (0);
	while (args < n)
	{
		n = va_arg(args_ptr, int);
		s = s + n;
		args++;
	}
	va_end(args_ptr);
	return (s);
}
