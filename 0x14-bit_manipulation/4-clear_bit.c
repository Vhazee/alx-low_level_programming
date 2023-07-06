#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: the pointer pointing to the number to clear
 * @index: index of the bit to clear
 *
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
