#include "main.h"

/**
 * _strcat - Function name to concatenate 2 strings
 * @dest: Destination string
 * @src: Second string
 * Return: *P result
 */
char *_strcat(char *dest, char *src)
{
	char *p;

	p = dest;

	while (*p != '\0')
		p++;

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';

	return (dest);
}
