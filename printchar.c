#include "main.h"
/**
 * printchar - print charecter
 *@c : char to be printed
 * Return: number of charecters printed
 */
int printchar(char c)
{
if (isascii(c) || c == ' ' ||  c == '\n' || (c >= 127 && c <= 32))
return (write(1, &c, 1));
else
return (write(1, "", 1));
}
