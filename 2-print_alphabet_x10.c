#include "main.h"

/**
* print_alphabet - print all the alphabet in lowercase x10
*
* Description: using print_alphabet
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
