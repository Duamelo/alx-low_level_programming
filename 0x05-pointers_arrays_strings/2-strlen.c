#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the length of a string as parameter
 *
 * @s: the string to determine its length
 *
 * Description: function that returns the length of a string
 *
 * Return: size of a string
 */
int _strlen(char *s)
{
	int size;
	int i;

	size = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}
