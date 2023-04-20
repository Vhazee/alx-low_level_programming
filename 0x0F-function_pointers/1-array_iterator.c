#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints out each array onto a new line
 * @array: array to print
 * @action: pointer to array
 * @size: size of the array
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
