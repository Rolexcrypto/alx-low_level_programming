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
	char c;
	
	int d;
	
	c = 'a';
	d = 0;
	while
		(d < 10)
		{
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
	putchar('\n');

	return (0);
}
