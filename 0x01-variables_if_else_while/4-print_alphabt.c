#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;
	/*Use for loop and if condition to rid off the q and e*/
	for (i = 'a'; i <= 'z'; i++)
		if ((i != 'q') && (i != 'e'))
			putchar(i);
	putchar('\n');
	return (0);
}
