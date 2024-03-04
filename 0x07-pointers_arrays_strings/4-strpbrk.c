#include "main.h"

/**
*_strpbrk - Searches a string for any a set of bytes
*@s: The string to be searched
*@accept: Sets of bytes to be searched for
*Return: if a set is matched a pointer to it is returned
* if no set is matched it returns null
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
	for (index = 0; accept[index]; index++)
	{
	if (*s == accept[index])
	return (s);
	}
	s++;
	}
	return ('\0');
}
