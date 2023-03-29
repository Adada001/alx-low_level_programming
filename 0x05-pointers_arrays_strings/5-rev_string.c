/**
 * rev_string - reverses a string in place
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	for (int i = 0; i < len / 2; i++) {
		char tmp = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = tmp;
	}
}
