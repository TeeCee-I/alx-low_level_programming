#include "main.h"

/**
 * _puts - A funtion that Prints the given string on output
 * @str: Input string
 * Return: void
 */
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}

	_putchar('\n');
}
