#include <stdio.h>
/**
 * main - prints '_putchar\n'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char str[] = "_putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	putchar(c);
	i++;
	}
return (0);
}
