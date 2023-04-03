#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: input
 * @size: input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sumFirst = 0, sumSecond = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sumFirst = sumFirst + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumSecond += a[i * size + (size - i - 1)];
	}
	printf("% d, % d \n", sumFirst, sumSecond);
}
