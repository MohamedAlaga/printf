#include "main.h"
void printchar(char c)
{
if (isgraph(c))
write(1, &c, 1);
else
{write(1, " ", 1); }
}
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
int stringlen(char *str)
{
if (isgraph(*str))
{return (strlen(str)); }
else
return (6);
}
int _printf(const char *format, ...)
{
int counter = 0;
char *temp;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
printchar(va_arg(args, int));
break;
case '%':
printchar('%');
break;
case 's':
temp = va_arg(args, char *);
printstr(temp);
counter += stringlen(temp) - 1;
break;
}
}
else
{
write(1, format, 1); }
format++;
counter++;
}
return (counter);
}
