#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void alphabet(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		putchar(letter);
		letter++;

	}
	putchar('\n');
}
