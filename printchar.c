#include "main.h"
void printchar(char c)
{
if (isgraph(c))
write(1, &c, 1);
else
{write(1, " ", 1); }
}