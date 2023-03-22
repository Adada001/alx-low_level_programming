#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: the int to check
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if ((n < 0 || n > 0))
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
