#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		putchar(letter);
		letter++;

	}
	putchar('\n');
}
