#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: Variable of any number (signed and unsigned)
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	if (n == 0)
		{
			_putchar('0');
			return (0);
		}

		n %= 10;

		if (n < 0)
		{
			_putchar((n * -1) + '0');
			return (n * -1);
		}
			_putchar(n + '0');
			return (n);
}
