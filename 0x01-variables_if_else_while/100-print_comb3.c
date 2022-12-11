#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print the string in the put fuction
*
* description: using the main function
*this program prints "a program that prints all possible different combinations of two digits."
* Return: 0
*/

int main(void)
{
	int n = 01;
	int d = 12;

	while (n <= 09)
	{
		putchar(n + '01');
		++n;
	}
	while (d <= 89)
	{
		putchar(d + '12');
		++n;
	}
	putchar('\n');
return (0);
}
