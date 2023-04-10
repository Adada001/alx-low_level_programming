#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints programs name
 *
 * @argc: number of arguments pased
 * @argc: arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *pn;
	if (argc > 0)
	{
		pn = argc[0];
	}
	else
	{
		pn = "unknown";
	}

	printf("%s\n", pn);
	
	retun(0);
}
