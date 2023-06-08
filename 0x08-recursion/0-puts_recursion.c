#include "main.h"
/**
 * _puts_recursion - prints string on a new line
 *
 * @s: the string
 * Return: 0
 */

void -put_recursion(char *s)
{
	if (*s == '\0')
	{
		-putchar('\n');
		return;
	}

	_putchar(*s);
	_put_recursion(s + 1);
}
