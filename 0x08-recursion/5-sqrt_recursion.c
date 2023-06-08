#include "main.h"
/**
 * _sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The square root of the number, or -1 if it doesn't have a natural square root.
 */
int _sqrt_helper(int n, int start, int end)
{
	int num, square;	
	num = (start + end) / 2;
	square = num * num;
	
	if (start > end)
		return (-1);

	if (square == n)
		return (num);
	else if (square < n)
		return (_sqrt_helper(n, num + 1, end));
	else
		return (_sqrt_helper(n, start, num - 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of the number, or -1 if it doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0, n));
}
