#include <unistd.h>
#include <stdarg.h>

/**
 * characters - Imprime des caractères à partir d'une chaîne formatée.
 *
 * Cette fonction parcourt une chaîne formatée et imprime les caractères qu'elle contient.
 * Elle utilise une liste d'arguments de longueur variable et prend en charge l'impression
 * de caractères individuels en utilisant le spécificateur de format '%c'.
 *
 * @format: La chaîne formatée à imprimer.
 *
 * Return: Le nombre de caractères imprimés (sans compter le caractère de fin de chaîne).
 */

int characters(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int printed_chars = 0;

	while (*format)
		{
		if (*format == '%')
		{
		format++;
		
		if (*format == 'c')
		
		{
		char c = va_arg(args, int);
		write(1, &c, 1);
		printed_chars++;
		}

	}
	else
	{

		write(1, format, 1);
		printed_chars++;
		}
		format++;
		}

	va_end(args);
	return (printed_chars);
}
