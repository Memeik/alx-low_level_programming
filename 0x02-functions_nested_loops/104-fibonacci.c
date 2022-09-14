#include <stdio.h>

/**
 * main - prints the fib
 *
 * Return: 0 always
 */

int main(void)
{
	long int a, b, n, result;

	a = 1;
	b = 2;

	for (n = 1; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%ld\n", a);
		}
		else
		{
			printf("%ld, ", a);
		}
		result = a + b;
		a = b;
		b = result;
	}

	return (0);
}
