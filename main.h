#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *fmt, ...);

int _putchar(char c);
int _puts(const char *s);
int handle_chars(va_list args, const char *fmt);

int handle_numbers(va_list args, const char *fmt);
int I_handle_d_specifier(int n);
int custom_string(char *str);
int string(char *str);
int binaries(int n);
int ints(int n);
int handle_u_int(unsigned int n);
int handle_octal(unsigned int n);
int handle_hex_lower(unsigned int n);
int handle_hex_upper(unsigned int n);
#endif
