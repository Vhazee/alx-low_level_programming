#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: input destination
 * @src: input source
 * @n: number of bytes to be copied from memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
