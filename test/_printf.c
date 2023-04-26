#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a char to stdout
 * @pos: current position within the string being printed
 * @char_to_print: character to print
 * Return: length of the character
 */
int print_char(int *pos, int char_to_print)
{
	int length = 0;

	_putchar(char_to_print);
	*pos = *pos + 2;
	length = 1;
	return (length);
}

/**
 * print_str - print a char to stdout
 * @pos: current position within the string being printed
 * @str_to_print: string to print
 * Return: length of the string printed
 */
int print_str(int *pos, char *str_to_print)
{
	int i;
	int len = 0;

	for (i = 0; str_to_print[i] != '\0'; i++)
	{
		_putchar(str_to_print[i]);
		len++;
	}
	*pos = *pos + 2;
	return (len);
}

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
