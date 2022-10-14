#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 *
 * @n: first parameter
 *
 * Description: function that returns the sum of all its parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(op, int);
	}
	va_end(op);
	return (sum);
}
