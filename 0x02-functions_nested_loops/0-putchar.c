#include <stdio.h>

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
		putchar(pc[i]);
	}
	putchar('\n');
	return (0);
}
