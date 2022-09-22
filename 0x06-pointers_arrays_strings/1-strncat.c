#include "main.h"

/**
 * _strncat - function that concatenates two string
 * accordint to the number of n
 *
 * @dest: destination string
 * @src: source destination
 * @n: the number of byter that to be added to dest
 *
 * Description: append at most n bytes from src to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	while (j != n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
