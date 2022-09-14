#include <stdio.h>                                                                                                                      
#include "main.h"                                                                                                                       
                                                                                                                                        
/**                                                                                                                                     
 * print_to_98 - prints all natural numbers from n to 98                                                                                
 * @n: Number input                                                                                                                     
 * Return: Returns void always                                                                                                          
 */                                                                                                                                     
void print_to_98(int n)                                                                                                                 
{
	for (int i = n; i <= 98; i++){                               
		printf("%d, ", i);
	}
}
