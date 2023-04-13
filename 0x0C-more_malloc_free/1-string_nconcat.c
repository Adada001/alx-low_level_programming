#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concat two strings
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: maximum number of bytes of s2 to concat
 *
 * Return: A ponter to the concatenated string or NULL if mem allocation fails
 */
char *string_nconcat(char *s1, char *2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concat;

	/* Treat NULL as an empty string */
	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	/*Get the ken of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate memory for the concatd string */
	if (n >= len2)
		concat = malloc(sizeof(char) * (len1 + len2 +1));
	else
		concat = malloc(sizeof(char) * (len1 + n + 1));
	if  (concat == NULL)
		return (NULL);

	/* cpy sq and teh first n bytes of s2 into the new string */
	for (unsigen int i = 0; i < len1; i++)
		concat[i] =s1[i];
	for (unsigned int i = 0; i < n && s2[i]; i++)
		concat[len1 +i] = s2[i];

	/* Add a null terminator to the end of the new string */
	concat[len1 + (>= len2 ? len2 : n)] = /\0;

	return (concat);
}
