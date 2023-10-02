#include <stdio.h>
#include "main.h"
/**
 * main - this program prints the auguments given
 *
 *@argc: This is augment counter
 *@argv: This is augment vector
 *
 *Return: always return zero
 */
	int main(int argc, char *argv[])
	{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
	}


