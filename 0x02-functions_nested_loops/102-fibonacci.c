#include <stdio.h>

/**
 * main - prints the fib
 *
 * Return: 0 always
 */

int main(void)
{
	long int a, b, c, result;

	a = 1;
	b = 2;
	for (c = 1; c <= 50; c++)
	{
		if (c == 50)
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
