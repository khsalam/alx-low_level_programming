#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: number of char to concatenate
 * Return: two concat strings
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, m;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (m = 0; (dest[i + m] = *src++) != '\0'; m++)
	{
		if (m > n)
			break;
	}
	return (dest);
}
