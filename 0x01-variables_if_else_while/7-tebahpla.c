#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: print the lowercase alphabet in reverse
 *
 * Return: 0 as value
 */
int main(void)
{
	int code = 122;

	while (code >= 97)
	{
		putchar(code);
		code--;
	}
	putchar('\n');
	return (0);
}
