#include "main.h"
/**
 * _strstr - Finds the first occurrence of a substring
 * @haystack: Pointer to the string to search
 * @needle: Pointer to the substring to find
 *
 * Return: Pointer to the beginning of the located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack++;

	}

	return ('\0');
}
