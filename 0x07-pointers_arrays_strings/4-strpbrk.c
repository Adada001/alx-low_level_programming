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
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
