#include "main.h"

/**
* reverse_array - reverse array
* @a: array
* @n: integer
* Return: void
*/

void reverse_array(int *a, int n)
{
int i, t, j = n - 1;
for (i = 0; i < n / 2; i++)
{
t = a[i];
a[i] = a[j];
a[j] = t;
j--;
}
}
