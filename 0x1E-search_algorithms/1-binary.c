#include "search_algos.h"
/**
  * binary_search - searches for a value in a sorted array of integers
  * using the Binary search algorithm
  * @array: pointer to the first element of the array to search
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: index of the where value is located
  */

int binary_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	L = 0;
	R = size - 1;

	while (L <= R)
	{
		int m = floor((L+R)/2);
	}

}
