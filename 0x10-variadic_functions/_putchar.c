#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - function writes character c to stdout
 * @c: The character to write to stdout
 *
 * Return: 1 (success), on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
