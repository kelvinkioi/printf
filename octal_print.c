#include "main.h"
/**
 * octal_p - prints an unsigned integer in octal format
 * @n: unsigned integer to be printed
 *
 * Return: number of characters printed
*/
int octal_p(unsigned int n)
{
	int cnt = 0;

	if (n <= 7)
	{
		return (_putchar(n + '0'));
	}

	cnt = octal_p(n / 8);
	return (_putchar('0' + n % 8) + cnt);
}

/**
 * octal_print - prints in octal format from list
 * @arguments: list of arguments
 *
 * Return: number of characters printed
*/
int octal_print(va_list arguments)
{
	unsigned int n = va_arg(arguments, unsigned int);

	return (octal_p(n));
}
