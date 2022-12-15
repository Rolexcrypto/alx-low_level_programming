#include "main.h"

/**
* print_alphabet_x10 - print all the alphabet in lowercase 10 times
*
* Description: using void print_alphabet_x10(void)
* this program print "print_alphabet_x10"
*/

void print_alphabet_x10(void)
{
	int tens;
	char letter;

	for (tens = '0'; tens <= '9'; tens++)

	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
