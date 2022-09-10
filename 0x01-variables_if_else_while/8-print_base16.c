#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Returns true always
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (n = 97; n <= 102; n++)
		putchar(n);

	putchar('\n');

	return (0)
}
