#include "main.h"
/**
 * _printf - print anything
 *@format : str
 *
 * Return: number of charecters printed
 */
int _printf(const char *format, ...)
{
int counter = 0,num;
char *temp ;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
while (*format != '\0')
{
if (*format == '%' && (*(format + 1) == 'c'
|| *(format + 1) == 's' || *(format + 1) == '%' || *(format + 1) == 'd' || *(format + 1) == 'i'))
{
if (*(format + 1) == 'c')
counter += printchar(va_arg(args, int));
else if (*(format + 1) == '%')
counter += printchar('%');
else if (*(format + 1) == 's')
{
temp = va_arg(args, char *);
counter += printstr(temp);
}
else if (*(format + 1) == 'd' || *(format + 1) == 'i')
{
num = va_arg(args, int);
counter += printnum(num);
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
