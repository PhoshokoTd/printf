#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rot13(va_list arg);
int call_function_manager(char aux, va_list arg);
int print_rev(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
void _puts(char *str);
int _strlen(char *s);
int print_ptr(va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);

/**
 * struct code_format - Struct format
 * @sc: The specifiers
 * @f: The function associated
 */

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
