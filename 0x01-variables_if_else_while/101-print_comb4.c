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
	int e;

	for (c = 48; c <= 55; c++)
		for (d = c + 1; d <= 56; d++)
			for (e = d + 1; e <= 57; e++)
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (c != 55 || d != 56 || e != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
