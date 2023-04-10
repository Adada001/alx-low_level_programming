#include <stdio.h>
/**
 * main - prints all args. passed
 * @argc: number of CLI args.
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 < argc; i++)
		printf("%szn", argv[i]);

	return (0);
}
