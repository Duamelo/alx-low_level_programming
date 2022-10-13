#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * @array: function's pointers array
 * @size: size of the array param
 * @action: function's pointer that to be executed
 *
 * Description: execute a function given as a param on each elem of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
