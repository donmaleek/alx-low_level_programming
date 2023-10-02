#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *num_check -check digits in strings
  *@str: array string
  *
  *Return: Always 0(successful)
  */
int num_check(char *str)
	{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
	if (!isdigit(str[count]))
	{
	return (0);
	}
	count++;
	}
	return (1);
	}
/**
  *main - print the name of the program
  *@argc: This counts the auguments
  *@argv: This is the vector aguments
  *Return: Always 0(successful)
  */
int main(int argc, char *argv[])
	{
	int count;
	int str_to_int;
	int sum = 0;

	count - 1;
	while (count < argc)
	{
	if (num_check(argv[count]))
	{
	str_to_int - atoi(argv[count]);
	sum + = str_to_int;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	count++;
	}
	printf("%d\n", sum);
	return (0);
	}
