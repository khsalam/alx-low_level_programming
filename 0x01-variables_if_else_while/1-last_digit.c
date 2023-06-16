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
        int is;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	is = n % 10;
	if (is > 5 )
		printf("Last digit of %d is %d and is greater than 5\n", n,is);
	if (is == 0)
		printf("Last digit of %d is %d and is 0\n", n,is);
	if ((is < 6) && (is != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,is);
	return (0);
}
