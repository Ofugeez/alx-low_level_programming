// search_algos.h

#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */


// linear_search.c

#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *                 using linear search.
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: If value is not present or array is NULL, -1.
 *         Otherwise, the index of the first occurrence of value
 *
 * Description: Prints a value every time it is compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}


// binary_search.c

#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using binary search.
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: If value is not present or array is NULL, -1.
 *         Otherwise, the index of the first occurrence of value
 *
 * Description: Prints a value every time it is compared in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
