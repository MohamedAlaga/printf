#include "main.h"
/**
 * printchar - print charecter
 *@c : char to be printed
 * Return: number of charecters printed
 */
int printchar(char c)
{
if (isgraph(c) || c == ' ')
write(1, &c, 1);
else
{write(1, "", 1); }
return (1);
}
