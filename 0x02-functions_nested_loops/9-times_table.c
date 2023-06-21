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
	int n;

	for (h = 0; h <= 9; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			n = h * m;
			f = n % 10;
			l = n / 10;
			if (n < 10)
			{
				if (n > 0)
					_putchar(' ');
				_putchar(n + '0');
				_putchar(',');
			}
			else
			{
				f = n % 10;
				l = n / 10;
				_putchar(' ');
				_putchar(l + '0');
				_putchar(f + '0');
				_putchar(',');
			}
			if (m < 9)
			_putchar(' ');
		}
		_putchar('\n');
		}

}
