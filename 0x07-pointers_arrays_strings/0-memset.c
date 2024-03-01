#include "main.h"

/**
**_memset - fuction that fills memory with constant byte
*@s: Memory area to be filled
*@b: char to copy
*@n: number of times to copy b(char to copy)
*Return: Pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
return (s);
}
