#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return; Returns true always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchair((i % 10) + '0');

		if (i == 9)
			break;

		putchar(',');
		putchat(' ');
	}

	putchar('\n');

	return (0);

	return (0);
}
