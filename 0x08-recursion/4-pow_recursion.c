#include "main.h"
/**
 * _pow_recursion - cal the value of x raised to power of y
 * @x: base value
 * @y: exponent value
 *
 * Return: the result of x raised to y or -1 if its an error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
