#include "main.h"

/**
 * _strncat - Function name to concatenate two(2) strings
 * @dest: Resulting string
 * @src: String 2
 * @n: Number of bytes from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	p = dest;

	while (*p != '\0')
		p++;

	while ((n > 0) && (*src != '\0'))
	{
		*p = *src;
		n--;
		p++;
		src++;
	}

	return (dest);
}
