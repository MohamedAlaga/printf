#include "main.h"
/**
 * printstr - print all the string
 *@str : string to be printed
 *
 */
void printstr(char *str)
{
//if (isgraph(*str))
while (*str)
{
printchar(*str);
str++;
}
//else
//{
/*write(1, "", 1) ; }*/}
