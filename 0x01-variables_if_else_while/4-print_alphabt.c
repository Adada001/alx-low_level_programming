#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	int az = "abcdefghijklmnopqrstuvwxyz";

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}

