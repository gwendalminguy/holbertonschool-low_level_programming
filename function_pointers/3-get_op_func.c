#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - gets the matching function for a given operator
 * @s: operator
 *
 * Return: matching function
 */
int (*get_op_func(char *s))(int, int)
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

	while (i < 5)
	{
		if (!strcmp(ops[i].op, s))
			break;
		i++;
	}

	return (ops[i].f);
}
