#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main -this prgram prints multiplation of 2 numbers
  *@argc: number of auguments
  *@argv: array of arguments
  *Return: returns 0
  */
int main(int argc, char *argv[])
{
	int k, w, mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);
	w = atoi(argv[2]);
	mult = k * w;

	printf("%d\n", mult);
	return (0);
}
