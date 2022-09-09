#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers of base 10 starting from 0
 *
 * Return: 0 as value
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
