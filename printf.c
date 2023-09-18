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
if (*format == '%' && (*(format + 1) == 'c'
|| *(format + 1) == 's' || *(format + 1) == '%'))
{
if (*(format + 1) == 'c')
counter += printchar(va_arg(args, int));
if (*(format + 1) == '%')
counter += printchar('%');
if (*(format + 1) == 's')
{
temp = va_arg(args, char *);
printstr(temp);
counter += stringlen(temp) ;
}
format++;
}
else
{
write(1, format, 1); 
counter++;}
format++;
}
va_end(args);
return (counter);
}
