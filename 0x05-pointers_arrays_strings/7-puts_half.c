#include "main.h"
#include <string.h>


/**
 * puts_half - function that should print the second half of the string
 *
 * @str: string parameter that its half is being printed
 *
 * Description: prints half of a string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int size;

	size = strlen(str);
	if (size % 2 == 0)
	{
		i = size / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (size - 1) / 2;
		i = size - i;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
