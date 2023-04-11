#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a newly-allocated space in memory containing a copy of str given
 * @str: str to be copied
 *
 * Return: duplicate
 */
char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup[index] = str[index];

	dup[len] = '\0';

	return (dup);
}
