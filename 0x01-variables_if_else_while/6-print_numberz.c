#include <stdio.h>
/**
 * main - Prints all Decimal single digit numbers
 * Return: Returns true always
 */
int main(void)
{
	int n;

	for (n = 0; <= 9; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
