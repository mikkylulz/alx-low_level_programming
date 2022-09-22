#include "main.h"

/**
* rot13 - encodes a string in rot13
* @s: string to encode
*
* Return: address of s
*/
char *rot13(char *s)
{
int i, k;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; *(s + i); i++)
{
if (a[k] == *(s + i))
{
(s + i) = b[k];
break;
}
}
}
return (s);
}
