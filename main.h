#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
int _printf(const char *format, ...);
int nums(va_list arg, int *i, int *char_counter, const char *format, int chk);
int handle_binary(va_list arg, int *i, int *char_counter, const char *format);
int handle_flag(char format, va_list arg, int *char_counter);
int get_val(int d, int *char_counter);
int handle_long(va_list arg);
void print_long(long d, int *char_counter);
int longc(va_list arg, int *i, int *char_counter, const char *format, int chk);
void print_int(int d, int *char_counter);
int strgs(va_list arg, int *i, int *char_counter, const char *format, int chk);
int convers(va_list arg, int *i, int *char_counter, const char *form, int chk);
#endif
