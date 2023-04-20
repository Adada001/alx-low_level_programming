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
	if (array && cmp && size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

