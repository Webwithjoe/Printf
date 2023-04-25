#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
int _printf(const char *format, ...);
int strgs(va_list arg, int *i, int *char_counter, const char *format, int chk);
#endif
