#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
int _printf(const char *format, ...);
void printchar(char c, char c2);
int printstr(char *str, char *str2);
int stringlen(char *str);

#endif
