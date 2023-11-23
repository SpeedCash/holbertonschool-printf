#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * format_char - print char
 *
 * @args: argument.
 *
 * Return: count of chars.
 */
int format_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
