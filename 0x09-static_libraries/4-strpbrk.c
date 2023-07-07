#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any existance of a byte in a list of bytes
 * @s: string to search in
 * @accept: string containing the bytes to look for
 *
 * Return: pointer to the byte in s that matche
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
