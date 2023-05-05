#include "main.h"

/**
 * print_binary - function prints the binary representation
 * of a given int number
 * @n: the number to print in binary representation
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int currentNum;
	int j;
	int binRep = 0;

	for (j = 63; j >= 0; j--)
	{
		currentNum = n >> j;

		if (currentNum & 1)
		{
			_putchar('1');
			binRep++;
		}
		else if (binRep)
			_putchar('0');
	}
	if (!binRep)
		_putchar('0');
}
