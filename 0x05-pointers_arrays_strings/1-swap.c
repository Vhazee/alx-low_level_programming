#include "main.h"

/**
 * swap_int - swaps the value of two integers a and b
 * @a: interger to be swapped
 * @b: integers to be swapped
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
