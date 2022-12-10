#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle"
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of char: %i byte(s)\n", sizeof(c));
	printf("size of int: %i byte(s)\n", sizeof(i));
	printf("size of long int: %i byte(s)\n", sizeof(li));
	printf("size of long long int: %i byte(s)\n", sizeof(lli));
	printf("size of float: %i byte(s)\n", sizeof(f));
	return (0);
}
