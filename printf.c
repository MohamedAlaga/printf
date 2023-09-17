#include"main.h"
int _printf(const char *format, ...)
{
	int counter = 0, templen = 0, tempchar;
	va_list args;
	char *temp;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			counter++;
			format++;
			continue;
		} else
		{
			format++;
		}
		if (*format == '\0')
			break;
		if (*format == 'c')
		{
			tempchar = va_arg(args, int);
			if (tempchar == 0)
			{
				temp =  " ";
				write(1, temp, 1);
			}
			else
			{
				write(1, &tempchar, 4);
			}
			counter++;
		}
		if (*format == 's')
		{
			temp = va_arg(args, char*);
			if (temp != NULL)
			{
				templen = strlen(temp);
				write(1, temp, templen);
				counter += templen;
			}
		}
		if (*format == '%')
		{
			write(1, format, 1);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}
