#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: a letter, lowercase or uppercase
 * Return: Returns 1 if argument is an alphabet, and Returns 0 otherwise
 */
int _isalpha(int c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);

	return (1);
}
