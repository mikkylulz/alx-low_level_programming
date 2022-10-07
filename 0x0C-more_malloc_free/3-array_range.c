#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers ordered
* from min to max, inclusive.
* @min: The first value of the array.
* @max: The last value of the array.
*
* Return: If min > max or the function fails - NULL.
* Otherwise - a pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *p;
	int x, y = 0;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (x = min; x <= max; x++)
	{
		p[y] = x;
		y++;
	}
	return (p);
}
