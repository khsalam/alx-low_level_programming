#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the sign of the variable
 * betty style doc for function main goes there 
 * Return: always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
		printf("%d\n is Positive", n);
	if( n ==0 )
		printf("%d\n is zero", n);
	if (n < 0 ) 
		printf("%d\n is negative", n);
	return (0);
}
