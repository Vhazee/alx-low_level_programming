#include "main.h"
/**
* *_strncat - function concatenates 2 strings
* @dest: the target string
* @src: what is being added
* @n: number of src is being added to dest
* Return: returns the dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
