#include <stdio.h>
/**
 * main - Program will Print all the alphabets in lowercase
 * Return: Returns true always
 */
int main(void)
{
	char alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha++);
	}
	putchar('\n');

	return (0);
}
