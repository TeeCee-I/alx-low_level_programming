#include <stdio.h>                                                                                                                      
#include "main.h"                                                                                                                       
                                                                                                                                        
/**                                                                                                                                     
 * print_to_98 - prints all natural numbers from n to 98                                                                                
 * @n: Number input                                                                                                                     
 * Return: Returns void always                                                                                                          
 */                                                                                                                                     
void print_to_98(int n)                                                                                                                 
{
	if (n < 98){
	int i;
	for (i = n; i < 98; i++){
		if (i >= 0){
		printf("%d,", i);
		}
	}
	}
	else{
		int i;
		for (i = n; i > 98; i--){
			if (i >= 0){
				printf("%d,", i);
			}
		}
	}
	printf("%d\n", 98)
}
