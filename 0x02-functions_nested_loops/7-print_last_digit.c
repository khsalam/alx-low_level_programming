#include "main.h"
#include "ctype.h"

/**
 *print_last_digit - check if input is alpha
 *@c: the Input paramater
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
