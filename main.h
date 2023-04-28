#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int handle_format(char c, va_list args);
int print_char(char c);
int print_string(char *s);
int print_percent(void);
int print_integer(int n);
int print_uns(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, int uppercase);
int print_pointer(void *p);
int print_binary(unsigned int n);

#endif /* MAIN_H */
