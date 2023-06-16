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
	int f;

	for (c = 48; c <= 57; c++)
		for (d = c ; d <= 57; d++)
			for (e = c ; e <= 57; e++)
				for (f = c ; f <= 57; f++)
				{
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);
					if (c != 57 || d != 57 || e != 57 || f != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');
	return (0);
}
