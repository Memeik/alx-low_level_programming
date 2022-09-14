#include <stdio.h>

/**
 * main - prints the fib
 *
 * Return: 0 always
 */

int main(void)
{
	int a, b, sum, result;

	a = 1;
	b = 2;
	sum = 0;
	while(b < 4000000)
	{
		if(b % 2 == 0)
		{
			sum = sum + b;
		}
		result = a + b;
		a = b;
		b = result;
	}
	printf("%d\n", sum);

	return (0);
}






