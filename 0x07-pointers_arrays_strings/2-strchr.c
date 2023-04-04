#include "main.h"

/**
 * _strchr - search char in a string
 * @s: string
 * @c: char to search
 *
 * Return: point to the first occurance of c found or Null if not found.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] = '0\'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
