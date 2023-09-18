#include "main.h"
void printstr(char *str)
{
if (isgraph(*str))
while (*str)
{
printchar(*str);
str++;
}
else
{
write(1, "(null)", 6) ; }}