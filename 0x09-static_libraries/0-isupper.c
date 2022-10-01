#include "main.h"

/**
* _isupper - check uppercase
* @c: tested character
* Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
