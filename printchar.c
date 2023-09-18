#include "main.h"
/**
 * printchar - print charecter
 *@c : char to be printed
 */
int printchar(char c)
{
if (isgraph(c) || c == ' ')
{
write(1, &c, 1);
return (1);}
else
{
write(1, "", 1);
return (0); }
}
