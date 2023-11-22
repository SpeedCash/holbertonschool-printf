#ifndef MAIN_H
#define MAIN_H

/*Prototypes*/

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


int _putchar(char c);
int _printf(const char *format, ...);
void printChar(const char *format, ...);
void printf_int(const char *format, ...);

#endif