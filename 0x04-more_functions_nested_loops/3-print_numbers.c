#include "main.h"

/**
 * print_numbers - Prints numbers 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar("%d ", i);
	}

	_putchar('\n');
}
