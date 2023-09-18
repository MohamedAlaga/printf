#include "main.h"
/**
 * _printf - print anything
 *@format : str
 *
 * Return: number of charecters printed
 */
int _printf(const char *format, ...)
{
int counter = 0;
char *temp;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
switch (*(format + 1))
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
default:
printchar(*format);
counter++;
break;
}
format++;
}
else
{
write(1, format, 1); }
format++;
counter++;
}
va_end(args);
return (counter);
}
