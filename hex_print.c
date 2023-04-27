#include "main.h"
/**
  * hex_p - prints an unsigned int in hexadecimal format
  * @n: unsigned integer to be printed
  *
  * Return: number of characters printed
 */
int hex_p(unsigned int n)
{
	int cnt = 0;
	char *h = "0123456789abcdef";

	if (n <= 15)
	{
		return (_putchar(h[n]));
	}

	cnt = hex_p(n / 16);
	return (_putchar(h[n % 16]) + cnt);
}

/**
  * hex_print - prints hexadecimal format "x"
  * @arguments: list of arguments
  *
  * Return: the number of characters printed
 */
int hex_print(va_list arguments)
{
	unsigned int n = va_arg(arguments, unsigned int);

	return (hex_p(n));
}
