#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: Where to copy to
 * @src: Where to copy from
 * @n: number of bytes to copy
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int var = 0;

	while (var < n)
	{
		dest[var] = src[var];
		var++;
	}
	return (dest);
}
