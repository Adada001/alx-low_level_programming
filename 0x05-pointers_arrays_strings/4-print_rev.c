#include "main.h"

/**
 * print_rev - prints a string in reverse to stdout
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	for (int i = len - 1; i >= 0; i--)
		_putchar(1, s + i, 1);

	_putchar(1, "\n", 1);
}
