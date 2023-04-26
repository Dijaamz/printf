#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
void my_utoa_hex_lowercase(unsigned int value, char *str);
void my_utoa_hex_uppercase(unsigned int value, char *str);
void my_utoa_hex(unsigned int value, char *str, int uppercase);
size_t my_strlen(const char *s);
void my_itoa(int value, char *str);
void my_utoa(unsigned int value, char *str);
void my_utoa_octal(unsigned int value, char *str);



#endif
