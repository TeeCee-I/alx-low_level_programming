#include "main.h"
#include <stdlib.h>

/**
 * create_array - CReates and initializes Char arrays
 * @size: Array Size
 * @c: char initializer
 * *
 * return: NULL on failure
 * return: Pointer to array on success.
 */

char *create_array(unsigned int size, char c);
{
	char *y;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	y = malloc(sizeof(char) * size);

	if (y = NULL)
		return (NULL);
	for (i = o; i < size; i++)
	{
		y[n] = c;
	}
	return (y);
}
