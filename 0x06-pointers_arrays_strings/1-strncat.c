#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, dl;

	i = 0;

	while (dest[i])
		i++;

	for (dl = 0; dl < n && src[dl] != '\0'; dl++)
		dest[i + dl] = src[dl];
	
	dest[i + dl] = '\0';

	return (dest);
}
