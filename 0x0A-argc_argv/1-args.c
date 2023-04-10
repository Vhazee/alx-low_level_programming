#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of args passed to the program
 * @argc: number of args
 * @argv: array of args
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*This ignores argv*/
	printf("%d\n", argc - 1);
	return (0);
}
