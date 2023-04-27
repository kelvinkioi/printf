#include "main.h"
/**
 *sstring_print - Print a string with conversion of ASCII values
 *@arguments: list of arguments
 *
 * Return: The number of bytes that has been printed
*/
int sstring_print(va_list arguments)
{
	int cnt = 0;
	char *str = va_arg(arguments, char *);
	int i;

	if (!str)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		cnt = 6;
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			cnt += 2;

			if (str[i] <= 15)
			{
				_putchar('0');
				cnt++;
			}
			cnt += HEX_p(str[i]);
		}
		else
		{
			_putchar(str[i]);
			cnt++;
		}
	}
	return (cnt);
}
