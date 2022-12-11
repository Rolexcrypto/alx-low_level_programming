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
	int ones = '0'
	int tens = '0'

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens =='8'))
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
