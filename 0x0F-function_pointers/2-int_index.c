#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: array to be searched
  * @size: size of array
  * @cmp: pointer to funtion
  *
  * Return: index of the first element for which the cmp function
  * does not return 0a
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);

		i++;
	}
	return (-1);
}
