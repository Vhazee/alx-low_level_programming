#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to standard output
 * @c: The character to write
 * Return: 1 (Sucess) or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
