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

	for (i = n - 1; i >= 0 ; i++)
	{
		_putchar (s[n]);
	}
	_putchar ('\n');
}
