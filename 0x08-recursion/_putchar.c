#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success) or -1 (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
