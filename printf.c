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
char *temp ;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
while (*format != '\0')
{
if (*format == '%' && (*(format + 1) == 'c'
|| *(format + 1) == 's' || *(format + 1) == '%' || *(format + 1) == 'd'))
{
if (*(format + 1) == 'c')
counter += printchar(va_arg(args, int));
if (*(format + 1) == '%')
counter += printchar('%');
if (*(format + 1) == 's')
{
temp = va_arg(args, char *);
counter += printstr(temp);
}
if (*(format + 1) == 'd')
{
temp = va_arg(args, char*);
if(*temp >= 30 && *temp <= 39)
printchar(*temp);
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
