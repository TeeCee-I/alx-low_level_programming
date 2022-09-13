#include "main.h"

/**
 * print_alphabet - Function to print all the lowercase alphabets 10 times
 * Return: Always return void
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 1; n <= 10; n++)
			
		{
			char c;

			for (c = 'a'; c <= 'z'; c++)
				{	
					_putchar(c); 
					_putchar('\n');
			}
		}
}
