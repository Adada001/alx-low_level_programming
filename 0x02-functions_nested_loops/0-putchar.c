#include "_putchar.h"

/**
 * main - Prints the _putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pc[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(pc[i]);
	}
	_putchar('\n');
	return (0);
}
