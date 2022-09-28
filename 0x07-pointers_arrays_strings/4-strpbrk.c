#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: String 1
 * @@accept: String 2
 * Return: Pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int b, a = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
