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
if (*format == '%' )
{
if (*(format + 1) == 'c')
counter += printchar(va_arg(args, int));
else if (*(format + 1) == 's')
{
temp = va_arg(args, char *);
counter += printstr(temp);
}
else if (*(format + 1) == 'd')
{
temp = va_arg(args, char*);
if (*temp >= 30 && *temp <= 39)
printchar(*temp);
}
else
{
counter += printchar('%');
}
format++;
}
else
{
printchar(*format);
counter++; }
format++;
}
va_end(args);
return (counter);
}
