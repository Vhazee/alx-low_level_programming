#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function returns index of first element
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function to compare
 * Return: -1 if no element matches or size is greater or equals zero
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
