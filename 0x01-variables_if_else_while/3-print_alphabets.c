#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 *
 * Description: printing alphabet in lowercase, and then in uppercase
 *
 * Return: 0 as value
 */
int main(void)
{
	int code = 97;

	while (code <= 90 || code <= 122)
	{
		putchar(code);
		if (code == 90)
			break;
		if (code == 122)
		{
			code = 65;
		}
		else
		{
			code++;
		}
	}
	putchar('\n');
	return (0);
}
