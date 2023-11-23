#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * format_string - print string.
 *
 * @args: argument.
 *
 * Return: character count.
 */

int format_string(va_list args)
{
	int i;
	int count_x = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		count_x += _putchar(str[i]);

	return (count_x);
}
