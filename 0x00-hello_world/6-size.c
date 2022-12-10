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

	printf("sizeof(char) = %id\n", sizeof(c));
	printf("sizeof(int) = %id\n", sizeof(i));
	printf("sizeof(long) = %id\n", sizeof(li));
	printf("sizeof(int) = %id\n", sizeof(lli));
	printf("sizeof(float) = %d\n", sizeof(f));
	return (0);
}
