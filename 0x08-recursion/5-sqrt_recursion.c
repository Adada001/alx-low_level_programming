/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
*/
int _sqrt_recursion_wrapper(int n, int min, int max)
{
	int num, square;

	num = (min + max) / 2;
	square = num * num;

	if (square == n)
		return (num);
	else if (min == max)
		return (-1);
	else if (square < n)
		return (_sqrt_recursion_wrapper(n, num + 1, max));
	else
		return (_sqrt_recursion_wrapper(n, min, num - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
