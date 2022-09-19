#include "main.h"

/**
 * _strlen - Function name to return the length of a string
 * @l: input string
 * Return: Length of input string
 */
int _strlen(char *l)
{
	int length = 0;
	char *r = l;

	while (*r != '\0')
	{
		length++;
		r++;
	}

	return (length);
}
