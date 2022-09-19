#include <string.h>
#include "main.h"


/**
 * rev_string - function that reverses a string
 *
 * @s: string parameter to be reverse
 *
 * Description: reverses a string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	j = 0;
	i = strlen(s) - 1;
	while (j <= i / 2)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
