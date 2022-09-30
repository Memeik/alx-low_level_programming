#include "main.h"

/**
 * _isalpha - prove lower and upper
 *
 * @c: An input character
 *
 * Description: function returns 1 if the character is a
 *
 * letter, lowercase or uppercase.
 *
 * Return:0 in otherwise.
 */

int _isalpha(int c)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				return (1);
		}
	}

	return (0);
}
