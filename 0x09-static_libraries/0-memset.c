#include "main.h"
/**
 * _memset - fill first n bytes of memory with a specific value
 * @s: address of memory to be filled
 * @b: value to fill memory
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
