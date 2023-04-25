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
	int len = 0;
	int i;
	va_list ap;
	char specifier;
	char *str_to_print;

	va_start(ap, format);

	while (format[len] != '\0')
	{
		if (format[len] == '%')
		{
			specifier = format[len + 1];

			if (specifier == 'c')
			{
				_putchar(va_arg(ap, int));
				len = len + 2;
			}

			if (specifier == 's')
			{
				str_to_print = va_arg(ap, char *);
				for (i = 0; str_to_print[i] != '\0'; i++)
				{
					_putchar(str_to_print[i]);
				}
				len += 2;
			}
			
			if (specifier == '%')
			{
				_putchar('%');
				len = len + 2;
			}


		}
		_putchar(format[len]);
		len++;
	}
	va_end(ap);
	return (len);
}
