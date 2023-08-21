#include <stdio.h>
#include "main.h"

/**
* _islower - function prints if the characters are lowercase or not
* @c: the letter being tested for case
*
* Return: 0 if not lowercase, 1 if lowercase
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
