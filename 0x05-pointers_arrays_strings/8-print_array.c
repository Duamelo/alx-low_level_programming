#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n element of an array
 *
 * @a: array variable
 * @n: number of element that to be printed
 *
 * Description: prints n elements of an array of integers
 *
 * Return: NOTHING
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
