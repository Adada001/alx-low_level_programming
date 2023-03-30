#include "main.h"
/**
 * _strncat - Concatenates two strings using an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dl;

	i = 0

	while (dest[i])
		i++;
	for (dl = 0; dl < n && src[dl] != '\0'; dl++)
		dest[i + dl] = src[dl];
	dest[i + dl] = '\0';

	return (dest);
}
