#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	int i;
	unsigned long int bitChange = n ^ m;
	unsigned long int currentNum;

	for (i = 63; i >= 0; i--)
	{
		currentNum = bitChange >> i;
		if (currentNum & 1)
			counter++;
	}
	return (counter);
}
