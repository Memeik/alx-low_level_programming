#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: assigned a pointer char var
 * @c: assigned char var
 * Return: c
 **/

char *_strchr(char *s, char c);
{
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s);
			break;
		}
		i++;
	}
	return 0;
}
