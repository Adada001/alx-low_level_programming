#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: pointer to a function that takes an int argument and returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
