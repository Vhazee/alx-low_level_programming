#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - void function prints name using pointer function
 * @name: The string to print
 * @f: pointer to function
 *
 * return: nothing (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

