#include <stdio.h>
/*
*This is a program that prints its name
*@ using the main arguments
*/
int main (int argc, char *argv[])
	{
	/*checking if one argument is provided*/
	if (argc>=1)
	{
	printf("Program name:%s\n",argv[0]);
	}
	else
	{
		printf("No program name detected\n");
	}
	return 0;
	}

