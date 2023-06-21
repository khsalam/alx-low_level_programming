#include "main.h"
#include "ctype.h"
#include "stdlib.h"

/**
 *print_to_98 - return sum
 *@n: - First
 */
void print_to_98(int n)
{
	int i;

	if ( n < 98 )
	{
		for ( i = n ; n <= 98 ; n++)
			printf("%d, ",n);
	}
	else
	{
		for (i = n ; n >= 98 ; n--)
			printf("%d, ",n);
	}
}
