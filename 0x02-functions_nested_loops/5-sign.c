#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: the number of the sign to be printed
* Return: return 1 if number is greater than zero,
* return 0 if number is zero and
* return -1 if number is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		ruturn (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

