#include "main.h"

/**
 * rev_string - a function that reverse a string
 *
 * followed by a new line.
 *
 * @s: an input string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0;
	char temp;
	int middle, i;

	while (s[len] != '\0')
		len++;

	middle = len / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
