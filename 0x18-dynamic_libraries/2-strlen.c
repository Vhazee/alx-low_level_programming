#include "main.h"
/**
 * _strlen - function returns the length of a string
 * @s: the string
 * Return: always length
 */
int _strlen(char *s)
{
	int lengt = 0;

	while (*s != '\0')
	{
		s++;
		lengt++;
	}
	return (lengt);
}
