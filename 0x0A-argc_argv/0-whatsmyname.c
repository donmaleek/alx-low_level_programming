#include <stdio.h>

/**
 *main - This is the main function of the program
 *This program prints its name even if the program is moved.
 *
 *@argc: This is the augment counter
 *@argv: This the augment vector to represent string pointer
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
	{
	/*checking if one argument is provided*/
	if (argc >= 1)
	{
	printf("%s\n", argv[0]);
	}
	else
	{
		printf("No program name detected\n");
	}
	return (0);
	}

