#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int my_total, my_power;
	int L;

	if (b == NULL)
	return (0);

	for (L = 0; b[L]; L++)
	{
		if (b[L] != '0' && b[L] != '1')
			return (0);
	}
	for (my_power = 1, my_total = 0, L--; L >= 0; L--, my_power *= 2)
	{
		if (b[L] == '1')
			my_total += my_power;
	}

	return (my_total);
}

