#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the numeric digits 0-9
 * Return: always return 0
 */
int main(void)
{
	int c;

	for (c = 48 ; c < 58; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
