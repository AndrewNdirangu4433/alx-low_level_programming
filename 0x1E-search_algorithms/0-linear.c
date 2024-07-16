#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search- entry point
 *
 * Description: looks through an array to find
 * a value using the linear seach algorithm
 *
 * @array: array to be searched
 * @size: size of array
 * @value: the value being searched for
 * Return: index of the value found in array,
 * (-1) if value not in array
 */



int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (!array || size == 0)
	{
		return (-1);
	}
	while (a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a]  == value)
		{
			return (a);
		}
		a++;
	}
	return (-1);
}
