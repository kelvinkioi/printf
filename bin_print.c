#include "main.h"
/**
 * print_binary - A function that returns
 * number of digits in its binary representation
 * @n: unsigned integer
 * Return: number of digits
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n <= 1)
		return (_putchar('0' + n));
	count = print_binary(n / 2);
	return (_putchar('0' + n % 2) + count);
}
/**
 * bin_print - A function that returns thr print_binary function
 * @arguments: list of arguments
 * Return: print_binary
 */
int bin_print(va_list arguments)
{
	unsigned int n = va_arg(arguments, unsigned int);

	return (print_binary(n));
}
