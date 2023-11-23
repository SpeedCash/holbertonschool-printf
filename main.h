#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/*Prototypes*/

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


int _putchar(char c);
int _printf(const char *format, ...);
int format_char(va_list args);
void printf_int(const char *format, ...);
int format_string(va_list args);
int format_mod(va_list args);



#endif
