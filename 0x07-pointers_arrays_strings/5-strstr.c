#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: input string
 * @needle: inut string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *firstOne = haystack;
		char *secondOne = needle;

		while (*firstOne == *secondOne && *secondOne != '\0')
		{
			firstOne++;
			secondOne++;
		}
		if (*secondOne == '\0')
			return (haystack);
	}
	return (NULL);
}
