#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array of integers
* @size: size of array
* @cmp: function pointer
* Return: index of first element that matches with `cmp`, or -1 if none found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int l, i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (l = 0; l < size; l++)
	{
		i = cmp(array[l]);
		if (i != 0)
			return (l);
	}
	return (-1);
}
