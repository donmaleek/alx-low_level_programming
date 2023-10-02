#include <stdio.h>
#include <stdlib.h>

/**
 * main - This programs adds positive numbers i.e auguments
 * @argc: This is the augument counter
 * @argv: This is the augument vector
 * Return: 0 on sucess, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
	{
	printf("Error\n");
	return (1);
	}
	}

	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
