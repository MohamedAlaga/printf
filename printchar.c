#include "main.h"
/**
 * printchar - print charecter
 *@c : char to be printed
 */
void printchar(char c,char c2)
{
if (isgraph(c) || c == ' ')
write(1, &c, 1);
else
{write(1, "", 1); }
}
