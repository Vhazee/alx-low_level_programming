#include "main.h"

/**
 * _memset - fills the block of memory with a value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to change
 *
 * Return: new array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

