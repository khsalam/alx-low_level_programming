#include <stdio.h>

/**
 * main - Print the size of the main data types
 * Retuen: 0 if success else return one
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("size of long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long int: %d bytes\n", sizeof(long long int));
	return (0);
}
