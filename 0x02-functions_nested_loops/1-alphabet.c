#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowecase 
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
