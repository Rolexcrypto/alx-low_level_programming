#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print the string in the put fuction
*
* description: using the main function
* this program prints "a program that prints all possible different combinations of two digits"
* Return: 0
*/

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digit */
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digit */
		{
			if (!((ones == tens) || (tens > ones)))/* elinimates repitition */
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/* adds comma and space */
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
