#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, n, i, h;

	len = 0;

	while (str[len] != '\0')
		len++;

	if (len %2 == 0)
		h = len / 2;
	else
	{
		h = (len -1) / 20;
		h++;
	}


	for ( i = len; str[i] != '\0'; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
