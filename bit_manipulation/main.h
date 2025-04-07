#ifndef MAIN_H
#define MAIN_H

/* Function Prototypes */
/* Converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Prints the binary representation of a number */
void print_binary(unsigned long int n);

/* Returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/* Returns the number of bits you would need to flip to get form */
/* one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
