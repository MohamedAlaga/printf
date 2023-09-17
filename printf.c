#include"main.h"

int _printf(const char *format, ...){
	int counter = 0;
	int templen = 0;
	va_list args;
	char *temp;
	int tempchar;

	va_start(args,format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format,1);
			counter ++;
			format++;
			continue;
		}else
		{
			format++;
		}

		if (*format == 'c')
		{
			tempchar = va_arg(args,int);
			write(1, &tempchar,4);
			counter++;
		}
		if (*format == 's')
		{
			temp = va_arg(args,char*);
			templen = strlen(temp);
			write(1, temp,templen);
			counter++;
		}
		if (*format == '%')
		{
			write(1, format,1);
			counter++;
		}
		format++;
		
	}
	return counter;
}
