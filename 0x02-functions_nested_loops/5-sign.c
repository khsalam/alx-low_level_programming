#include "main.h"
#include "ctype.h"

/**
 *print_sign - check if input is alpha
 *@c: the Input paramater
 *
 * Return: 1 for positive -1 for negative else 0
 */
int print_sign(int c)
{
	int r;

	if (c > 0)
	{
		r = 1;
		_putchar('+');
	}
	if (c == 0)
	{
		r = 0;
		_putchar('0');
	}
	if (c < 0)
	{
	       r = -1;
	       _putchar('-');
	}
	return (r);
}
