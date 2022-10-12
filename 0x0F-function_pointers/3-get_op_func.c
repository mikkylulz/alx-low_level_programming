#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - select the correct operation function asked by user
* @s: operator argument
* Return: function pointer corresponding to operator given
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while ((i < 5 && s != NULL) && (s[1] == '\0'))
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
