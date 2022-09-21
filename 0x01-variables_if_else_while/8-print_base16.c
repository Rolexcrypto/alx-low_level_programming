#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "All the numbers of base 16 in lowercase"
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);
		if (n == 57)
			n += 39;
			++n;
	}
	putchar('\n');

	return (0);
}
