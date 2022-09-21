#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "All single numbers of base 10 starting from 0"
* Return: 0
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		++n;
	}
	printf("\n");

	return (0);
}
