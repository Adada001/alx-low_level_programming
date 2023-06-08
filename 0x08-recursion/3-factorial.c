#include "main.h"
/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate.
 *
 * Return: the factorial numer or -1 if its an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
