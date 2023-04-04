#include "main.h"
/**
 * _strspn - gets length of substring
 * @s: string to be searched
 * @accept: string containing char to searched
 *
 * Return: number of bytes
 */
unsigned in _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			return(len);
	}

	return (len);
}
