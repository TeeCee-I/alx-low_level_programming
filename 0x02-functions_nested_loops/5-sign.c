#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @c: initialized value
 * Return: Returns 1, 0, -1, for +ve, zero, -ve arguments respectively
 */
int print_sign(int c)
{
if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
												}
}
