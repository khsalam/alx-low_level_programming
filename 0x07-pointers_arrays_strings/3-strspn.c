#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string containing the list of characters to match for
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, fnd;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		fnd = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				fnd = 1;
			}
		}
		if (fnd == 0)
		{
			return (f);
		}
	}

	return (0);
}
