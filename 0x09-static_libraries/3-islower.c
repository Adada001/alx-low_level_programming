#include "main.h"

/**
* _islower - checks if a character is in lowercase
* @c: the character it checks
* Return: 1 if true. 0 if false.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
