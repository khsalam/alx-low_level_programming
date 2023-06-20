#include "main.h"

/**
 * main - print the _put char					
 * betty style doc for function main goes there
 * Return: always return 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;
	for (i = 0 ; i < 8; i++)
		_putchar(c[i]);
	_putchar ('\n');
	return (0);
}
