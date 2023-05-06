#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints to stdout format
 * @format: string to print
 * Return: Length of the string
 */

int _printf(const char *format, ...)
{
	int *pos_p;
	int pos, len = 0;
	va_list ap;
	char specifier;

	va_start(ap, format);
	pos_p = &pos;
	
	if (format == NULL)
		return (-1);

	while (format[pos] != '\0')
	{
		if (format[pos] == '%')
		{
			specifier = format[pos + 1];

			if (specifier == 'c')
			{
				len += print_char(pos_p, va_arg(ap, int));
				continue;
			}
			if (specifier == 's')
			{
				len += print_str(pos_p, va_arg(ap, char *));
				continue;
			}
			if (specifier == '%')
			{
				len += print_char(pos_p, '%');
				continue;
			}
			if (specifier == 'i' || specifier == 'd')
			{
				len += print_number(pos_p, va_arg(ap, int));
				continue;
			}
			if (specifier == 'b')
			{
				len += print_binary(pos_p, va_arg(ap, int));
				continue;
			}
		}
		_putchar(format[pos]);
		pos++;
		len++;
	}
	va_end(ap);
	return (len);
}
