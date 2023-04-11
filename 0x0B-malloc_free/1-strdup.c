#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates string to new memory space location
 * @str: char
 * Return: pointer to new string or NULL if mem insufficient
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);
	j = 0;

	for (j = 0; str[j]; j++)
		new_str[j] = str[j];
	return (new_str);
}

