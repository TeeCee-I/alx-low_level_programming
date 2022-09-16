#include "main.h"

/**
 * _isdigit - This checks for a digit (0 through 9)
 * @c: character input
 * Return: 1 if input is a number
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
