#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to standard out
 * @c: The character to write
 * Return: 1 (Success), on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
