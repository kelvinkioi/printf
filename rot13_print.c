#include "main.h"
/**
 * rot13_print - function to print the rot13ed string
 * @arguments: list of arguments
 * Return: count
 */
int rot13_print(va_list arguments)
{
	char *str = va_arg(arguments, char *);
	int i;
	int count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] < 'n')
			_putchar(str[i] + 13);
		else if (str[i] >= 'n' && str[i] <= 'z')
			_putchar(str[i] - 13);
		else if (str[i] >= 'A' && str[i] < 'N')
			_putchar(str[i] + 13);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			_putchar(str[i] - 13);
		else
			_putchar(str[i]);
		count++;
	}
	return (count);
}
