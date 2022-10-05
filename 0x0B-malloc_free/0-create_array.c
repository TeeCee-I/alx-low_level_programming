#include "main.h"
#include <stdlib.h>

/**
 * create_array - CReates and initializes Char arrays
 * @size: Array Size
 * @c: char initializer
 * *
 * return: NULL on failure
 * Or Pointer to array on success.
 */

char *create_array(unsigned int size, char c);
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return(NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr = NULL)
		return(NULL);
	for (i = o; i < size; i++)
	{
		arr[n] = c;
	}
	return(arr);
}
