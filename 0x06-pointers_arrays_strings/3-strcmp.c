#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: an input string
 *
 * @s2: an input string
 *
 * Return: The sum of s1 + s2
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*s1 && *s2)
	{
		if (s1[a] > s2[a])
		{
			return (15);
		}
		else if (s1[a] < s2[a])
		{
			return (-15);
		}
		else
		{
			return (a);
		}
	}
}
