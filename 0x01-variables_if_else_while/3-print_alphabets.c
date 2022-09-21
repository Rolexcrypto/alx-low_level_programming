#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print the string in the main function
*
* description: using the main function
* this program prints "The alphabet in lowercase and then in uppercase"
* Return: 0
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		++upper;
	}

	putchar('\n');

	return (0);
}
