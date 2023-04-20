#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - function writes character c to stdout
 * @c: character to write to stdout
 *
 * Return: 1 (Success) or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
