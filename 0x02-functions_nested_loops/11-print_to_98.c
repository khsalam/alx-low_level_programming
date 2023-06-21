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
		for ( i = n ; i <= 98 ;i++)
		{
			printf("%d ",i);
			if (i != 98)
				printf(",");
		}
	}
	else if ( n == 98)
		printf("%d ",98);
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d ",i);
			if (i != 98)
				printf(",")
		}
	}
}
