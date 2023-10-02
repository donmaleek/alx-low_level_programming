#include <stdio.h>

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

	printf("%d\n", argc - 1);
	printf("lets see whats going on on argv\n");
	for (i = 0; i < argc; i++)
	{
	printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
	}
