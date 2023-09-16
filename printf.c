#include"main.h"

int _printf(const char *format, ...){
	int counter = 0;
	va_list args;
	
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
             char* temp = va_arg(args,char*);
             write(1, temp,1);
	     counter++;
         } else if (*format == 's')
         {
             format++;
             char* temp = va_arg(args,char*);
             int templen = strlen(temp);
             write(1, temp,templen);
	     counter++;
         }
         }
        }
	return counter;
}
