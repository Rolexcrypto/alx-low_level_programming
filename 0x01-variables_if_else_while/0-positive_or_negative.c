#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the string in the put function
 * 
 * Description: using the main function
 * this program prints "a random number and check whether it is positive, negative, or zero"
 * Return: 0
 * /
int main(void)
{
		int n;

			srand(time(0));
			n = rand() - RAND_MAX / 2;
			if (n > 0)
				printf("%d is positive\n", n);
			else if (n < 0)
				printf("%d is negative\n", n);
			else
				printf("%d is zero/n", n);
			return (0);
}
