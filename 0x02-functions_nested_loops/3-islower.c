#include "main.h"

/**
* _islower - checks if the character is lowercase
*
* Description: using the int _islower(int c)
* this program check "if the character is lowercase"
* Return: returns 1 and 0 depending on conditions
*/

int _islower(int c)
{
	return (c => 'a' && c <= 'z');
}

