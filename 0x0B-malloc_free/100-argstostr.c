#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;
	
	if (ac == 0 || av == NULL)
		return NULL;
	
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return NULL;
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[pos] = av[i][j];
			pos++;
		}
		
		str[pos] = '\n';
		pos++;
	}
	str[pos] = '\0';
	return str;
}
