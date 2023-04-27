#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * string_print - A function that prints out a string
 * @arguments: list of arguments
 *
 * Return: The number of bytes that has been printed or -1 on failure
 */
int string_print(va_list arguments)
{
		char *str = va_arg(arguments, char *);
		int count = 0;
		int x;

		if (!str)
			str = "(null)";
		while (*str)
		{
			x = _putchar(*str);
			if (x == -1)
				return (-1);
			count++;
			str++;
		}
		return (count);
}
