#include "main.h"

/**
 * swap_int - Function name to swap the 2 int arguments
 * @x: first input
 * @y: Second input
 * Return: Void
 */
void swap_int(int *x, int *y)
{
	int swap;

	swap = *y;
	*y = *x;
	*x = swap;
}
