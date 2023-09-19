#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int printchar(char c);
int printstr(char *str);
int stringlen(char *str);
int printnum(int n);

#endif
