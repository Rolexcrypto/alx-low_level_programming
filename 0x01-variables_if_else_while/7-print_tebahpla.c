#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the string in the put function
 *
 * Description: this program prints "The lowercase alphabet in reverse"
 * Return: 0
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		--lower;
	}
	putchar('\n');

	return (0);
}
