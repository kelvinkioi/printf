#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - prints output according to format (like printf)
 * @format: the string used
 *
 * Return: all
*/
int _printf(const char *format, ...)
{
	int all = 0;
	va_list arguments;
	int (*function)(va_list) = NULL;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);

	va_start(arguments, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			function = function_print(format);
			if (*(format) == '\0')
				return (-1);
			else if (function == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				all += 2;
			}
			else
				all += function(arguments);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			all++;
		}
		else
		{
			_putchar(*format);
			all++;
		}
		format++;
	}
	va_end(arguments);
	return (all);
}
