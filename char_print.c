#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * char_print - A function that prints out a character
 * @arguments: Va_list containing the char to print out next
 *
 * Return: The number of bytes printed out
 */
int char_print(va_list arguments)
{
	char c = va_arg(arguments, int);
	int count = 0;
	int x = _putchar(c);

	if (x == -1)
		return (-1);
	count++;
	return (count);
}
