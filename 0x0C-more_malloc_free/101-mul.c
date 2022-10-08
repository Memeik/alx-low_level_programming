#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */

int main(int argc, char **argv)
{
	long long int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = strtol(argv[1]);
		num2 = strtol(argv[2]);
		result = num1 * num2;
		printf("%lld\n", result);
		return (0);
	}
}
