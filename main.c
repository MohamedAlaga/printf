#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
printf("normal print%d \n", len);
printf("our print %d \n", len2);
_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Percent:[%%]\n");
printf("Percent:[%%]\n");
printf("TEST\n");
printf("OG\n");
printf("OURS\n");
return (0);
};
