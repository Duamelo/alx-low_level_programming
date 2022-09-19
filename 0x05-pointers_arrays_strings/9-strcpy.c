#include "main.h"

/**
 * _strcpy - function that copies string to another variable
 *
 * @dest: string parameter that is a copie
 * @src: string parameter that to be copied
 *
 * Description: copies the string pointed by src, including '\0', to the
 * buffer pointed to by dest
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
