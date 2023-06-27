#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, i, h;

	len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		h = len / 2;
	else
	{
		h = (len - 1) / 2;
		h++;
	}


	for ( i = h; str[i] != '\0'; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
