#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);

/* format specifiers */
int format_char(va_list list);
int format_string(va_list list);
int format_percent(va_list list);
int format_number(va_list list);

/* extra functions */
int display_sign(int n);
int display_unsign(unsigned int n);

#endif
