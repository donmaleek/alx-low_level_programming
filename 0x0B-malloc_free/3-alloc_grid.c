#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int k, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		arr[k] = (int *) malloc(sizeof(int) * width);
		if (arr[k] == NULL)
		{
			free(arr);
			for (j = 0; j <= k; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			arr[k][j] = 0;
		}
	}
	return (arr);
}

