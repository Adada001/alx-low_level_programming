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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
