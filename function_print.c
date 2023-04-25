#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * function_print - a function that determines which print function to use
 * @specifier: The character that identifier
 *
 * Return: A pointer that points to the corresponding print function
 * else return NULL
 */
int (*function_print(const char *specifier))(va_list)
{
	int i;

	type_t types[] = {
			{"c", char_print},
			{"s", string_print},
			{"d", int_print},
			{"i", int_print},
			{"b", bin_print},
			{NULL, NULL},
	};

	for (i = 0; types[i].identifier; i++)
	{
		if (*specifier == types[i].identifier[0])
			return (types[i].print);
	}
	return (NULL);
}
