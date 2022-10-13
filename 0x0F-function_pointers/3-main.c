#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc:  number of argument passed to program
 * @argv: double pointer to argument
 *
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, calc = 0;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	switch (argv[2][0])
	{
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
		calc = (*get_op_func(argv[2]))(num1, num2);
		printf("%d\n", calc);
		break;
	default:
		printf("Error\n");
		exit(99);
	}
	return (0);
}
