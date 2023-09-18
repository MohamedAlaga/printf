#include "main.h"
int stringlen(char *str)
{
if (isgraph(*str))
{return (strlen(str)); }
else
return (6);
}