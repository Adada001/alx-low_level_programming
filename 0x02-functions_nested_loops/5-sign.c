#include "main.h"
/**
 * print_sign - print + if n is greater than zero,
 *             0 if n is zero and - if n is less
 *             than zero.
 * @n: the number to check
 *
 * Return - 1 if greater than zero, 0 if n is zero, "-1" if less than zero
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
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
