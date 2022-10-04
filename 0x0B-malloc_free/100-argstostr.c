#include "main.h"
#include <stdlib.h>

/**
* argstostr - a function that concatenates
* all the arguments
*
* @ac: argument counter
*
* @av: argument holder
*
* Return: a pointer to a new string
*
* or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
char *str;
	int arg, byte, index, s = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			s++;
	}

	str = malloc(sizeof(char) * s + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}

	str[s] = '\0';

	return (str);
}


