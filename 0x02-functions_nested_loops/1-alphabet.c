#include "main.h"

/**
 * print_alphabet - prints the lowe alaphabet
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
