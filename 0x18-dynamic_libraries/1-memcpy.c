#include "main.h"
/**
 * _memcpy - function copies from the src to the dest
 * @dest: the dest
 * @src: the src
 * @n: the amount to be copied
 * Return: the altered dest value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cp = dest;

	while (n--)
	{
		*cp++ = *src++;
	}
	return (dest);
}
