#include "main.h"

/**
 * print_alphabet_x10 - print *10
 *
 * Description: It prints the alphabet in lowercase fallowed by a new line
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}
