#include <stdarg.h>
#include <stdio.h>

/**
* printf_int - print a integer value
*
* @format: print integer
* Return:
*/

void format_int(const char *format, ...)
{
	va_list list;
	va_start(list, format);

	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			int value = va_arg(list, int);

			printf("%d", value);
			format += 2;
		} else
			{
			putchar(*format);
			format++;
		}
	}

	va_end(list);
}
