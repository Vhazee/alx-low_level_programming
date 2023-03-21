#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: the int to check
 * Return: 1 and print + if n is greter than zero
 * Return: 0 and print 0 if n is zero
 * Return: -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
