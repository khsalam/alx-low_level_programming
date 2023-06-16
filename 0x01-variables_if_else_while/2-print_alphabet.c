#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the slphabit charactrers using putchar
 * Return: always return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
