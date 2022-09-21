#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "The alphabet in lowercase except q and e"
* Return: 0
*/

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
			++lower;
		putchar(lower);
		++lower;
	}
	putchar('\n');

	return (0);
}
