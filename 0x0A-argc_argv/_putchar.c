#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to standard output
 * @c: The character to print
 * Return: 1 (Success)
 * On error: -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
