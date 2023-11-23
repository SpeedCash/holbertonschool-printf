#include "main.h"
#include <unistd.h>

/**
 * print_mod - print %.
 *
 * @args: arguments.
 *
 * Return: count of chars.
 */

int format_mod(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
