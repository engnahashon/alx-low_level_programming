#include "search_algos.h"
/**
  * linear_search - searches for a value in an array of integers using linear
  * @array: pointer to the first element
  * @size: number of elements
  * @value: value to search
  *
  * Return: first index where value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	while (idx < size)
	{
		if (array[idx] != value)
			idx++;
		else
			return (idx);
	}
	return (-1);
}
