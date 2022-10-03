#include <stdio.h>

/**
 * main - Function Identifier to print num of args
 * @argc: Arg count
 * @argv: Args
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
