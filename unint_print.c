#include "main.h"
/**
 * unint_print - prints an unsigned integer
 * @arguments: list of arguments
 *
 * Return: the number of characters printed
*/
int unint_print(va_list arguments)
{
	unsigned long int n = va_arg(arguments, unsigned int);
	unsigned long int i = 1;
	int cnt = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (; i <= n; i *= 10)
		cnt++;

	i /= 10;

	for (; i > 0; i /= 10)
		_putchar(((n / i) % 10) + '0');

	return (cnt);
}
