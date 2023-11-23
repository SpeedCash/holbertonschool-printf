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

int format_char(va_list args);
int format_string(va_list args);
int format_mod(va_list args);
int format_int(va_list args);
typedef struct
{
    char specifiers;
    int (*f)(va_list);
} specifiers_t;

int get_function(char con_spec, va_list args)
{
    int i = 0;
    int count_x = 0;

    specifiers_t spec[] = {
        {'c', format_char},
        {'s', format_string},
        {'%', format_mod},
        {'d', format_int},
        {'i', format_int},
        {0, NULL}
    };

    while (spec[i].specifiers)
    {
        if (con_spec == spec[i].specifiers)
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
