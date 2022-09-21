#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print the string in the put function
*
* Description: uing the main function
* this program prints "The alphabet in lowercase"
* Return: 0
*/

int main(void)
{
	char zh = 'a';

	while (zh <= 'z')
	{
		putchar(zh);
		++zh;
	}
	putchar('\n');

	return (0);
}
