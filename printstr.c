#include "main.h"
/**
 * printstr - print all the string
 *@str : string to be printed
 * Return: number of charecters printed
 */
int printstr(char *str)
{int len = 0;
/*if (isgraph(*str))
*{
*/
while (*str)
{
printchar(*str);
str++;
len++;
}
return (len); }
/*else
*{
*write(1, "", 1);
*return (6); }}
*/
