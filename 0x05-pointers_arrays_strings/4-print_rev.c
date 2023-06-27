#include "main.h"
/**
 * print_rev - rest pointers dereference
 * @s: character to check.
 */
void print_rev(char *s)
{
	int n = 0;
	int i;

	while (s[n] != 0)
		n++;

	for (i = n; i >= 0 ; i++)
	{
		_putchar (str[n]);
	}
	_putchar ('\n');
}
