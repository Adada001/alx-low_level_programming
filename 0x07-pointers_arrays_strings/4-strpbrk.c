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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j - 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}
