#ifndef MAIN_H
#define MAIN_H

/**
 * main - this is the Entry point of the code
 *
 * Description: It is a header file with prototypes of all the functions
 * and codes written in this directory of C bit manipulation.
 *
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
