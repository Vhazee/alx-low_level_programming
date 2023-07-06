#include "main.h"

/**
 * set_bit - function sets a value of bit to 1 at a given index
 * @n: pointer pointing to the number to set
 * @index: index of a bit to set to 1
 *
 * Return: 1 if success, else -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
