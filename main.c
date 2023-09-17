#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
       	_printf("Let's try to printf a simple sentence.\n");
       	printf("Let's try to printf a simple sentence.\n");
    	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	printf("%");
	_printf("My name is %sand the first letter in it is%c and i have %s years old %% and this % should","ahmed",'a',"19","aaaaa");

    return (0);
}
