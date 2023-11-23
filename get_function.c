#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* get_function - function specifiers.
*
* @con_spec: Conversion specifiers.
* Return: Pointer to the function corresponding to the specifier.
*/
int (*get_function(const char *con_spec))(va_list)
{
	op_t spec[] = {
		{'c', format_char},
		{'s', format_string},
		{'%', format_mod},
		{'d', format_digit},
		{'i', format_digit},
		{0, NULL}
	};

	int i;

	for (i = 0; spec[i].op != 0; i++)
		{
		if (*con_spec == spec[i].op)
			return (spec[i].f);
		}

	return (NULL);
}
