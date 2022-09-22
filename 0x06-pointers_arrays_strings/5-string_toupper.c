#include "main.h"

/**
 * string_toupper - Changes lower cases to UPPER CASES
 * @s: Input string
 * Return: Modified string
 */
char *string_toupper(char *s)
{
	char *p;

	p = s;

	while (*p != '\0')
	{
		if (*p >= 97 && *p <= 122)
		{
			*p -= 32;
		}
		p++;
	}

	return (s);
}
