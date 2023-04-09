#include "main.h"

/**
 *_memcpy - function copies stuff from src to dest in memory
 *@dest: memory to write to
 *@src: memory to copy from
 *@n: number of bytes
 *Return: copied memory with n byted changed in dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

