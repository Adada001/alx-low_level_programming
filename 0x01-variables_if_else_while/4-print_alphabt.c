#include <stdio.h>

/**
 * main - Prints the alphabet except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
			++i;
		putchar(az[i]);
		++i;
	}
	putchar('\n');
	return (0);
}
