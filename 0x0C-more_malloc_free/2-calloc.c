#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array of a certain number
* of elements each of an inputted byte size.
* @nmemb: The number of elements.
* @size: The byte size of each array element.
*
* Return: If nmemb = 0, size = 0, or the function fails - NULL.
*
* Otherwise - a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int n;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(size * nmemb);
	if (x == NULL)
		return (NULL);
	for (n = 0; n < nmemb * size; n++)
	{
		x[n] = '\0';
	}
	return (x);
}
