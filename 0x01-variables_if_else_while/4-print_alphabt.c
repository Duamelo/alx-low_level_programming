#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, followed
 * by a new line, except q and e
 *
 * Return: 0 as value
 */
int main(void)
{
	int code = 97;

	while (code <= 122)
	{
		if (code != 101 && code != 113)
			putchar(code);
		code++;
	}
	putchar('\n');
	return (0);
}
