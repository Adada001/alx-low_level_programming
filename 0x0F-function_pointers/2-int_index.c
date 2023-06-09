#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 *
 * @array: pointer to an array of integers
 * @size: number of elements in the array
 * @cmp: pointer to a function that takes an int argument and returns an int
 *
 * Return: index of the first element for which cmp function does not return 0
 *         -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
