#include <stdio.h>
/**
 * main - Prints the name of the file of the program it was compiled from
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("This program was compiled from the file %s\n", __FILE__);
	return (0);
}
