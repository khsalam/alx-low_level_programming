#include "main.h"
#include "stdio.h"

/**
 * print_number - print the number parameter
 * @n: input
 */
void print_number(int n)
{
	int i;
	int t;
	int l;
	int lst;
	int m;

	t = 1;
	i = 0;
	
	if ( n < 0 )
	{
		_putchar('-');
		n = n * -1;
	}
	
	l = 0;
	m = n;

	for (i = 0; t < n; i++)
	{
		t = t * 10;
		l++;
	}
	if (t > 1)
		t = t / 10;
	if (n <= 9)
		_putchar(n + '0');
	else
	for (i = 0; i < l; i++)
	{
		lst = m / t;
		_putchar(lst + '0');
		m = m % t;
		t = t / 10;
		/* printf("New N = %d new div = %d \n",m,t); */
	}

}
