#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the numeric digits 01-89
 * Return: always return 0
 */
int main(void)
{
	int c;
	int d;

	for (c = 48; c <= 56; c++)
		for (d = c + 1; d <= 57; d++)
		{
			putchar(c);
			putchar(d);
			if (c != 56 || d != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
