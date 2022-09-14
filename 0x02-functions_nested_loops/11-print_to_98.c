#include "main.h"

void nlt98(int);
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Number input
 * Return: Returns void always
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}

	nlt98(n);

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n < 100)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
			}

			if (n == 98)
				break;
			
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
