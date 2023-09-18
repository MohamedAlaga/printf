#include "main.h"
/**
 * printchar - print charecter
 *@c : char to be printed
 */
void printchar(char c)
{
if (isgraph(c))
write(1, &c, 1);
else
{write(1, ' ',1);}
}
