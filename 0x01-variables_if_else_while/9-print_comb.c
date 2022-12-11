#include <stdio.h>
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
	int n = '0'
	int d = '0'

	for (d = '0'; d <= '9'; d++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (!((n == d) || (d > n)))
			{
				putchar(d);
				putchar(n);
				if (!(n == '9' && d =='8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}	
	}
	putchar('\n');
	return (0);
}
