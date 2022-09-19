#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @t: Input string
 * Return: Void
 */
void print_rev(char *t)
{
	char *p = t;

	while (*p != '\0')
	{
		p++;
	}

	p--;

	while (p >= t)
	{
		_putchar(*p);
		p--;
	}

	_putchar('\n');
}
