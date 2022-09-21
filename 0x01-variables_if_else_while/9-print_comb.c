nclude <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "all possible combinations of single-digit numbers."
 * Return: 0
 */

int main(void)
{
	int n =0;

	while(n <= 9)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}
	putchar('\n');

	return 0;
}
