#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps two values
 *
 * @a: a pointer to the first integer
 * @b: a pointer to the second one
 *
 * Description: swapw the values of two integers
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
