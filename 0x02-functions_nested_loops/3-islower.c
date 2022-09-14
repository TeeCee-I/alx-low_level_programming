#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: ASCII of alphabet range
 * Return: Returns 1 if lowercase
 * Return: Returns 0 if not
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
		return (1);
	if (c < 97 || c > 122)
		return (0);
}
