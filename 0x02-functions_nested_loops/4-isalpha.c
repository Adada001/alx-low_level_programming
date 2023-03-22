#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @ch: checks for character
 * Return: 1 if true (lower or uppercase)and 0 if false
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && c<= 'Z'))
		return (1);
	else
		return (0);
}		
