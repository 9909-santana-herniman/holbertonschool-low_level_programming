#ifndef CALC_H
#define CALC_H

#include <stdlib.h> /* For atioi and exit functions */
#include <stdio.h> /* For printf function */

/**
 * struct op - Stuct op
 * 
 * @op: The opertator as a string.
 * @f: A pointer to the function that performs the
 * corresponding operation.
 */

typedef struct op
{
	char *op; /* Operator as a string */
	int (*f)(int a, int b); /* Funtion pointer for the operation */
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function prototype for getting the correct function based on operator */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
