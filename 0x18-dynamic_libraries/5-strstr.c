#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: where the substring is in the main string or 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *hy, *ndl;

	if (haystack == '\0' || needle == '\0')
		return (0);
	for (; *haystack; haystack++)
	{

	for (hy = haystack, ndl = needle; *hy && *ndl && (*hy == *ndl); hy++, ndl++)
		;
	if (*ndl == '\0')
		return (haystack);
	}
	return (0);
}
