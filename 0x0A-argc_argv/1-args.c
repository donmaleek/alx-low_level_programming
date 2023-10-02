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
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
	}


