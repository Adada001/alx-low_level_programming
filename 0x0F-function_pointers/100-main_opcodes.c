#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success, 1 if the number of arguments is not correct,
 * 2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", main_ptr[i]);
		if (i == bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
