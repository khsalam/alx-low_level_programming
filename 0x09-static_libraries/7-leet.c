#include "main.h"

/**
 * leet - encode
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, x;
	int f[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int r[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == f[x])
			{
				n[i] = r[x];
				x = 9;
			}
		}
	}

	return (n);
}
