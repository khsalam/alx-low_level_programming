#include "main.h"
/**
 * putss - puts the even number characters
 * @str: character to check.
 */
void puts2(char *str)
{
	int n = 0;
	int i;

	while (str[n] != 0)
	{
		i = n % 2;
		if (i == 0)
			_putchar (str[n]);
		n++;
	}
	_putchar ('\n');
}
