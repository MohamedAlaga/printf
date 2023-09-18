#include "main.h"
/**
 * printstr - print all the string
 *@str : string to be printed
 *@str2 : string to check the arg
 *
 *Return: number of charecters printed
 */
int printstr(char *str, char *str2)
{int counter = 0;
if (isgraph(*str) && (str == str2))
while (*str)
{
printchar(*str, *str);
str++;
counter++;
}
else
{
write(1, "(null)", 6);
counter = 6; }
return (counter); }
