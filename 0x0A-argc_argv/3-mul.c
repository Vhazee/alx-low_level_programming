#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints product of two arg numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 (Success) or 1 on Error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
