#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the size of various types on the computer
 *
 * Return: 0 as value
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (int)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
