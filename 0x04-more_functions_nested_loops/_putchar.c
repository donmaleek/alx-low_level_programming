#include <unistd.h>

/**
 * _putchar - Custom function to print a character to stdout
 * @c: The character to be printed
 *
 * Return: On success, return the number of characters printed.
 * On error, return -1 and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

