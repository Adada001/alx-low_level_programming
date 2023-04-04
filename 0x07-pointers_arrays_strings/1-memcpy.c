/**
 * -memcpy - copy n bytes from mem area
 *  @dest: destination mem area to copy to
 *  @src: mem area to copy from
 *  @n: number of bytes to copy from @src
 *
 *  Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
