#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of caracter that to be copied
 *
 * Description: copies a string accordint to n
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i != n && src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
