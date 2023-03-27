#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes character to c stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
 * One error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
