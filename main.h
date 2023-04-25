#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list args);
void print_string(va_list args);
void print_percent(va_list args);
int _strlen(char *s);

#endif /* MAIN_H */