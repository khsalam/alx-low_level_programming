#include "main.h"

/**
 * print_alphabet - prints the lowe alaphabet
 */
void print_alphabet_x10(void);
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;
	for (j = 0; j < 10; j++)

		for (i = 0; i < 26; i++)
		{
			_putchar(c[i]);
		}	
	_putchar('\n');
}
