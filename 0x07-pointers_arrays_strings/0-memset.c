/**
 * _memset - fills memory with constant byte
 * @s: pointer to area to be filled
 * @b: constant byte to fill memory
 * @n: number of bytes to be filled
 *
 * Return: point to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i - 0; i < n; i++)
		s[i] = b;

	return (s);
}
