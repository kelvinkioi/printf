#include "main.h"
#include <string.h>
/**
 * print_reverse - prints a string in reverse and then returns count
 * @arguments: list of arguments
 * Return: count
 */
int reverse_print(va_list arguments)
{
	char *str = va_arg(arguments, char *);
	int len = strlen(str) - 1;
	int count = len + 1;

	if (!str)
	{
		return (0);
	}

	while (len >= 0)
	{
		_putchar(*(str + len));
		len--;
	}
	return (count);
}
