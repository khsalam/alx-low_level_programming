#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Count of parameters
 * @argv: Pointer of array of the paramters
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
