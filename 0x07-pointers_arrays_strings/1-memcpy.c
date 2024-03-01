#include "main.h"

/**
* _memcpy - function copies bytes to destination
*@dest: to memory area
*@src: from memory area
*@n: number of bytes
*Return: a pointer to the destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);

}
