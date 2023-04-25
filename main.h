#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct type - connect conversion specifiers with function
 * @print: pointer for the print functions
 * @identifier: conversion specifier for the code
 */
typedef struct type
{
	char *identifier;
	int (*print)(va_list);
} type_t;

int _putchar(char c);
int _printf(const char *, ...);
int (*function_print(const char *specifier))(va_list);
int char_print(va_list arguments);
int string_print(va_list arguments);
int int_print(va_list arguments);
int bin_print(va_list arguments);
int print_binary(unsigned int n);
int reverse_print(va_list arguments);
int rot13_print(va_list arguments);

#endif /*MAIN_H*/
