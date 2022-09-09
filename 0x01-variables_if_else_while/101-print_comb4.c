#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, p, f;

	for (d = '0'; d < '8'; d++)
	{
		for (p = d + 1; p <= '8'; p++)
		{
			for(f = p + 1; f <= '9'; f++)
			{
				if (p != d)
				{
					putchar(d);
					putchar(p);
					putchar(f);
					if (d == '7' && p == '8' && f == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
