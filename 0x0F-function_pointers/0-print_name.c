#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Entry point
 *
 * @name: name to be printed
 * @f: function's pointer that is used to print the name
 *
 * Description: prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
