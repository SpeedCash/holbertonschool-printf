#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
* _printf - Emulate the original printf function.
* @format: Format string.
* Return: Number of characters printed.
*/
int _printf(const char *format, ...)
{
	int i = 0, count = 0;

	va_list args;
	int (*format_func)(va_list);

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
				return (-1);

			format_func = get_function(format + i + 1);
			if (format_func != NULL)
			{
				count += format_func(args);
			}
			else
			{
				count += _putchar(format[i]);
				count += _putchar(format[i + 1]);
			}
			i++;
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
