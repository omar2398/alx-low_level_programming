#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


typedef struct types_arguments
{
	char t;
	void (*f)(va_list va);
} types;
void t_char(va_list va);
void t_integer(va_list va);
void t_float(va_list va);
void t_string(va_list va);

#endif 
