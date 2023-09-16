#include"main.h"

int _printf(const char *format, ...){
	int counter = 0;
	int templen = 0;
	va_list args;
	char *temp;
    int tempchar;

	
	va_start(args,format);
	while (*format)
	{
		if (*format != '%')
        {
	       	write(1,format,1);
		counter ++;
		format++;
        }else
        {
         format++;
         if (*format == 'c')
         {
             format++;
             tempchar = va_arg(args,int);
             write(1, &tempchar,4);
	     counter++;
         } else if (*format == 's')
         {
             format++;
             temp = va_arg(args,char*);
             templen = strlen(temp);
             write(1, temp,templen);
	     counter++;
         }
         }
        }
	return counter;
}
