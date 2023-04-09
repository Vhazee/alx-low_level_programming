#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to destination
 * @src: copy from source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int f = 0;
	int z = 0;

	while (*(src + f) != '\0')
	{
		f++;
	}
	for ( ; z < f ; z++)
	{
		dest[z] = src[z];
	}
	dest[f] = '\0';
	return (dest);
}

