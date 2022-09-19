#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define G_MIN 33
#define G_MAX 126

/**
* main - entry point
* description: generates random valid passwords for the program
* Return: Return 0
*/

int main(void)
{
int i, j, k;
int p[100];

j = 0;
srand(time(NULL));
for (i = 0; i < 100; i++)
{
p[i] = rand() % 78;
j += (p[i] + '0');
putchar(p[i] + '0');

if ((2772 - j) - '0' < 78)
{
k = 2772 - j - '0';
j += k;
putchar(k + '0');
break;
}
}
return (0);
}
