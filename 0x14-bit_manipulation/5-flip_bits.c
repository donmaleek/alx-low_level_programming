#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int my_set_diff;
	int my_set_counter;

	my_set_diff = n ^ m;
	my_set_counter = 0;

	while (my_set_diff)
	{
		my_set_counter++;
		my_set_diff &= (my_set_diff - 1);
	}

	return (my_set_counter);
}


