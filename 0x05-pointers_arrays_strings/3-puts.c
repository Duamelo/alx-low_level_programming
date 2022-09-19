#include <stdio.h>
#include "main.h"


/**
 * _puts - printing a string
 *
 * @str: string to be printed
 *
 * Description: prints a string, followed by a new line, to stdout
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
