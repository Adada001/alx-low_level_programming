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

	for (i=0; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(az[i]);
		}
		
	}
	putchar('\n');
	return (0);
}
