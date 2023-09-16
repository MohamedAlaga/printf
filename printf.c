#include"main.h"

int _printf(const char *format, ...) {
  int counter = 0;
  int tempchar;
  va_list args;

  va_start(args, format);
  while (*format) {
    if (*format != '%') {
      write(1, format, 1);
      counter++;
      format++;
    } else {
      format++;
      if (*format == 'c') {
        format++;
        tempchar = va_arg(args, int);
        write(1, &tempchar, 4);
        counter++;
      } else if (*format == 's') {
        format++;
        char *temp = va_arg(args, char *);
        int templen = strlen(temp);
        write(1, temp, templen);
        counter++;
      } else {
        write(1, format, 1);
        format++;
        counter++;
      }
    }
  }
  return counter;
}
