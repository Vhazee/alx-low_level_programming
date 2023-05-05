#include "main.h"
#include <unistd.h>

/**
 * _putchar - function write character c to standard output
 * @c: character to write and print
 *
 * Return: 1 (Success) or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
