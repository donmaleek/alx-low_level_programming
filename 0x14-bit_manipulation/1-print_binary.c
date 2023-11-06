#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int my_set_shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, my_set_shifts = 0; (temp >>= 1) > 0; my_set_shifts++)
		;

	for (; my_set_shifts >= 0; my_set_shifts--)
	{
		if ((n >> my_set_shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}

