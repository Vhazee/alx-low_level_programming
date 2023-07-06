#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number to search for index from
 * @index: index of the bit in given numbers
 *
 * Return: value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 63)
		return (-1);

	bitVal = ((n >> index) & 1);

	return (bitVal);
}
