#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - print in the put function
*
* Description: using the main function
* this program prints
* "a program that prints all possible different combinations of three digits"
* Return: 0
*/

int main(void)
{
	int ones ='0'
	int tens = '0'
	int hundred = '0'

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens ='0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) ||
							(tens > ones) || (hundreds > tens)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && tens == '8' && hundreds == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
