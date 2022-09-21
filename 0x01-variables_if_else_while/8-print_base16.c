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
	int n = 0;

	while (n <= 15)
	{
		putchar(n ='0');
		++n;
	}
	putchar('\n');

	return (0);
}
