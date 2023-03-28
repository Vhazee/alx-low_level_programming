#include "main.h"

/**
 * _strlen - Returns length of the string
 * @s: string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
