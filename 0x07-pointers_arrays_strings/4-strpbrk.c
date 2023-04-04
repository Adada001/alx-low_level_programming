#include "main.h"
/**
 * _strpbrk - search for the first occurance of any bytes in the string s 
 * in string accespt
 * 
 * @s: string to search
 * @accept: string containing matching bytes
 *
 * Return: bytes in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	for (s[i] != '\0'; i++)
	{
		j = 0;
		for (accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}
