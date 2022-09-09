#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: printing the alphabet in lowercase, followed by a new line
 *
 * Return: 0 as value
 */

int main(void)
{
	int code = 97;

	while (code <= 122)
	{
		putchar(code);
		code++;
	}
	putchar('\n');
	return (0);
}
