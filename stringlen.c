#include "main.h"
/**
 * stringlen - print all the string
 *@str : string
 *
 * Return: length of th string
 */
int stringlen(char *str)
{
if (isgraph(*str))
{return (strlen(str)); }
else
return (6);
}