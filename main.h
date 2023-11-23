#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct op
{
	char op;
	int (*f)(va_list args);
} op_t;


int _putchar(char c);
int _printf(const char *format, ...);
int format_char(va_list args);
int format_string(va_list args);
int format_mod(va_list args);
int (*get_function(const char *con_spec))(va_list);
int format_int(va_list args);
int format_digit(va_list args);

#endif
