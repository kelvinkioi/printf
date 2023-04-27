#include "main.h"
/**
  * HEX_p - prints an unsigned int in hexadecimal format
  * @n: unsigned integer to be printed
  *
  * Return: number of characters printed
 */
int HEX_p(unsigned int n)
{
	int cnt = 0;
	char *h = "0123456789ABCDEF";

	if (n <= 15)
	{
		return (_putchar(h[n]));
	}

	cnt = HEX_p(n / 16);
	return (_putchar(h[n % 16]) + cnt);
}

/**
  * HEX_print - prints hexadecimal format "X"
  * @arguments: list of arguments
  *
  * Return: the number of characters printed
 */
int HEX_print(va_list arguments)
{
	unsigned int n = va_arg(arguments, unsigned int);

	return (HEX_p(n));
}
