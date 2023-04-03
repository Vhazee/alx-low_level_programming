#include "main.h"

/**
 * _memset - fills first n bytes of memory
 * @s: starting address of memory to fill
 * @b: desired value
 * @n: number of bytes to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
