#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the slphabit charactrers using putchar
 * Return: always return 0
 */
int main(void)
{
	char c1;
	int n;

	for(n = 48; n <=57; n++)
		putchar(n);

	for (c = 'a'; c <='f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
