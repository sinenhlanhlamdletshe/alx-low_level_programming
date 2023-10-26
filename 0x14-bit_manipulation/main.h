#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned long int _pow(unsigned int base, unsigned int power);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
