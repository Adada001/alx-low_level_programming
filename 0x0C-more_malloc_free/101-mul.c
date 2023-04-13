#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check if a character is a digit
 *
 * @c: Character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - Print an error message and exit with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - Multiply two numbers represented as strings
 *
 * @num1: First number
 * @num2: Second number
 *
 * Return: Pointer to the result, or NULL on failure
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k, carry = 0, sum = 0;
	char *result;

	while (num1[len1] != '\0')
	{
		if (!_isdigit(num1[len1]))
			return (NULL);
		len1++;
	}

	while (num2[len2] != '\0')
	{
		if (!_isdigit(num2[len2]))
			return (NULL);
		len2++;
	}

	result = calloc(len1 + len2 + 1, sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1, k = i + j + 1; j >= 0; j--, k--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + carry + result[k];
			carry = sum / 10;
			result[k] = sum % 10;
		}
		result[k] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		return ("0");

	for (j = 0; j < len1 + len2 - i + 1; j++)
		result[j] += '0';

	return (result + i);
}

/**
 * main - Entry point
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		print_error();
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply(num1, num2);
	if (result == NULL)
	{
		print_error();
	}

	printf("%s\n", result);

	free(result);

	return (0);
}
