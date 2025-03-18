#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator passed as argument.
 * Return: Pointer to the function that corresponds to the
 * operator, or NULL if the operator is invalid.
 */

int (*get_op_func(char *s))(int, int)
{
	/* Array of structs mapping operators to corresponding functions */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* Marks the end of the array */
};
	int i = 0;

	/* Loop through the ops array to find the matching operator */
	while (ops[i].op != NULL)
	{
	/* Compare the s (user input) with the first character of ops[i].op[] */
	/* s[1] == '\0' ensures that only a single character was provided */
		if (s[0] == ops[i].op[0] && s[1] == '\0')
		{
			/* Return the corresponding function */
			return (ops[i].f);
		}
	i++;
	}
	
	return (NULL); /* Return NULL if no matching operator is found */
}
