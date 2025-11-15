#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of arguments passed to the function
 *
 * Return: The sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...);
/**
 * print_numbers - Prints numbers separated by a string
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Nothing (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * print_strings - Prints strings separated by a string
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 *
 * Return: Nothing (void)
 */
void print_strings(const char *separator, const unsigned int n, ...);

#endif
