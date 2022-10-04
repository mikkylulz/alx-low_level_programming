#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2-dimensional array of
* integers with each element initalized to 0.
*
* @width: The width of the 2-dimensional array.
*
* @height: The height of the 2-dimensional array.
*
* Return: If width <= 0, height <= 0, or the function fails - NULL.
* Otherwise - a pointer to the 2-dimensional a
*/

int **alloc_grid(int width, int height)
{
int **abel, i, j;
if (width <= 0 || height <= 0)
return (NULL);
abel = malloc(height * sizeof(int *));
return (NULL);
for (i = 0; i < height; i++)
{
abel[i] = malloc(width * sizeof(int));
if (abel[i] == NULL)
{
while (i >= 0)
{
free(abel[i]);
i--;
}
free(abel);
return (NULL);
}
for (j = 0; j < width; j++)
abel[i][j] = 0;
}
return (abel);
}
