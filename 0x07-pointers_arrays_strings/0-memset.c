#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: String to replace
 * @b: The character
 * @n: Number of bytes to be filled
 * Return: Pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}
