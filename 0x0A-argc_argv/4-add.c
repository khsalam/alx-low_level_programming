#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts
 * @argv: array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int n, m, i;

	m = 0;
	if (argc == 1)
	{
		printf("%i\n", 0);
		return (0);
	}
	
	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i] != '\0'; i++)
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}

		m = m + atoi(argv[n]);
	}
	printf("%i\n", m);
	return (0);
}
