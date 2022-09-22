#include "main.h"

/**
 * _strcat - function that concatenate two string
 *
 * @dest: destination string
 * @src: source string
 *
 * Description: appends the src string to the dest string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
