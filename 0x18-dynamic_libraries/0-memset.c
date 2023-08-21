#include "main.h"
/**
 * _memset - fucntion fills memory with a constant byte
 * @s: the area being looked at
 * @b: the byte filling the memory
 * @n: the amount of memory being filled
 * Return: the new memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pt = s;

	while (n--)
	{
		*pt++ = b;
	}
	return (s);
}
