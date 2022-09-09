#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This program will assign a random number to the variable n each time it is executed
 * Return: Returns true always
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else if (last_digit == 0)
	{
		print("0\n");
	}

	return (0);
}
