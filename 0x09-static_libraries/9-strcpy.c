#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: Destination variable
 * @src: Source variable
 * Return: Pointer to destination variable
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src != '\0')
	{
		*d = *src;
		src++;
		d++;
	}

	*d = '\0';

	return (dest);
}
