#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @a: Given array
 * @n: Number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int address = 0;

	while (address < n)
	{
		printf("%d", a[address]);

		if (address == (n - 1) || a[address + 1] == '\n')
		{
			break;
		}

		printf(", ");
		address++;
	}

	printf("\n");
}
