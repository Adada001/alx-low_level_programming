/**
 * -memcpy - copy n bytes fro mem src to mem dest
 *  @dest: destination mem area
 *  @src: source memory
 *  @n: number of bytes to copy
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
