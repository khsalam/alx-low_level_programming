#include "main.h"
#include "ctype.h"

/**
 *times_table - print time table
 *
 */
void times_table(void)
{
	int h;
	int m;
	int f;
	int l;

	for (h = 0; h <= 23; h++)
		for (m = 0; m <= 59; m++)
		{
			f = h % 10;
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else
			{
				f = h % 10;
				l = h / 10;
				_putchar(l + '0');
				_putchar(f + '0');
			}
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar(m + '0');
			}
			else
			{
				f = m % 10;
				l = m / 10;
				_putchar(l + '0');
				_putchar(f + '0');
			}
			_putchar('\n');
		}
}
