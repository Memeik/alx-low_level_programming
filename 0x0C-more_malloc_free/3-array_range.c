#include "main.h"
#include <stdlib.h>

/**
 * array_range - A funcon that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *s, l, i = 0;

	if (min > max)
		return (NULL);

	l = (max - min) + 1;
	s = malloc(sizeof(int) * l);

	if (s == NULL)
		return (NULL);

	while (i < l)
	{
		s[i] = min++;
		i++;
	}
	return (s);
}
