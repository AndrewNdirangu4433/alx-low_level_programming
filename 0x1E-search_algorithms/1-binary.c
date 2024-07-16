#include "search_algos.h"

/**
 * binary_search- entry point
 *
 * Description: looks through an array to find
 * a value using the Binary search algorithm algorithm
 *
 * @array: array to be searched
 * @size: size of array
 * @value: the value being searched for
 * Return: index of the value found in array,
 * (-1) if value not in array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
