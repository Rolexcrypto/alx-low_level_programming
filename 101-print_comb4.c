#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints
* "a program that prints all possible different combinations of three digits"
* Return: 0

int main(void)
{
	int hundreds = '0';
	int tens = '0';
	int ones ='0';
	
	for (hundreds = '0'; hundreds <= '9'; hundreds++)/* print the hundreds */
	{
		for (tens = '0'; tens <= '9'; tens++)/* print the tens */
		{
			for (ones = '0'; ones <= '9'; ones++)/* print the ones */
			{
				if (!((ones == tens) || (tens == hundreds) || (tens > ones) || (hundredds > tens)/* eliminates repitition */
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(hundreds == '7' && tens == '8' && ones == '9'))/* adds comma and space */
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
}
