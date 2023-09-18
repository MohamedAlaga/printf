#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
int _printf(const char *format, ...);
void printchar(char c);
void printstr(char *str);
int stringlen(char *str);

#endif
