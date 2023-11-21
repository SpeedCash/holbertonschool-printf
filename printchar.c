#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
*
*
*
*
*
*/
void printChar(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char ch = va_arg(args, int);

				_putchar(ch);
			}
			else if (*format == 's')
			{

				char *str = va_arg(args, char*);

				fputs(str, stdout);
			}
			else if
			{
				_putchar('%');
				_putchar(*format);
			}
		}
		else
		{
		_putchar(*format);
		}
	format++;
	}

	va_end(args);
}
