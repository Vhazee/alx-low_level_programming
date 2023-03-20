#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int count = 1;
	char i;

	/*while loop to loop through count 1-10*/
	/*for loop to loop throught the alphabets*/
	while (count++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
