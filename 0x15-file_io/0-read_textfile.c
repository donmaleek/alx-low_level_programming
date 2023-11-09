#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters
 * function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t d, k, b;
	char *my_buffer_set;

	if (filename == NULL)
		return (0);

	my_buffer_set = malloc(sizeof(char) * letters);
	if (my_buffer_set == NULL)
		return (0);

	d = open(filename, O_RDONLY);
	k = read(d, my_buffer_set, letters);
	b = write(STDOUT_FILENO, my_buffer_set, k);

	if (d == -1 || k == -1 || b == -1 || b != k)
	{
		free(my_buffer_set);
		return (0);
	}

	free(my_buffer_set);
	close(d);

	return (b);
}

