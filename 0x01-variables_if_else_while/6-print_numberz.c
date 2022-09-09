#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 *
 * Description: print all single digit numbers with putchar
 *
 * Return: 0 as value
 */
int main(void)
{
	int code = 48;

	while (code <= 57)
	{
		putchar(code);
		code++;
	}
	putchar('\n');
	return (0);
}
