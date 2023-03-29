/**
 * _strcpy - Copies the string pointed to by src
 * @dest: The buffer to copy the string to
 * @src: The string to copy
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
