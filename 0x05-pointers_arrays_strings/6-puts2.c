#include "main.h"

/**
 * puts2 - function should every other character of string starting with the first character
 * @str: input
 * Return: print the character numbers
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
