#include "main.h"

/**
 * rot13 - encode
 * @n: input
 * Return: Always 0 (Success)
 */
char *rot13(char *n)
{
	int i, x;
	char *s  = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rs = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			if (n[i] == s[x])
			{
				n[i] = rs[x];
				break;
			}
		}
	}

	return (n);
}
