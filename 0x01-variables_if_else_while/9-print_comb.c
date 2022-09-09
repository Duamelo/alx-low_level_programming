#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 *
 * Description: printing of all possible combination of single-digit-numbers
 *
 * Return: 0 as value
 */
int main(void)
{
	int code = 48;

	while (code <= 57)
	{
		putchar(code);
		if (code != 57)
		{
			putchar(44);
			putchar(32);
		}
		code++;
	}
	putchar('\n');
	return (0);
}
