#include "main.h"
#include "ctype.h"
#include <stdio.h>
/**
 *print_to_98 - return sum
 *@n: - First
 */
void print_to_98(int n)
{
	int i;

	if ( n < 98 )
	{
		for ( i = n ; n <= 98 ;in++)
			printf("%d, ",i);
	}
	else
	{
		for (i = n ; n >= 98 ; i--)
			printf("%d, ",i);
	}
}
