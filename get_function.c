#include "main.h"
#include <stddef.h>

/**
* get_function - function specifiers.
*
* @con_spec: Conversion specifiers.
* @args: arguments.
*
* Return: char count.
*/

int (*get_function(const char *con_spec))(va_list)
{
    int i = 0;
    int count_x = 0;

    op_t spec[] = {
        {'c', format_char},
        {'s', format_string},
        {'%', format_mod},
        {'d', format_int},
        {'i', format_int},
        {0, NULL}
    };

    while (spec[i].specifiers)
    {
        if (*con_spec == *spec[i].f)
            count_x += spec[i].f(args);
        i++;
    }

    if (count_x == 0)
    {
        count_x += _putchar('%');
        count_x += _putchar(con_spec);
    }

    return count_x;
}
