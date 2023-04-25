#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * int_print - returns integer
 * @arguments: list to hold the variable arguments
 *
 * Return: count
 */
int int_print(va_list arguments)
{
	int n = va_arg(arguments, int);
	int count = 0;
	long int i = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		n = n * -1;
	}
	for (; i <= n; i *= 10)
		count++;
	i /= 10;
	for (; i > 0; i /= 10)
	{
		_putchar(((n / i) % 10) + '0');
	}
	return (count);
}
