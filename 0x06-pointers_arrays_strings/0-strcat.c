#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{

	int i, n, m;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
        m = i;
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[m] = src[n];
		m++;
	}
	return (dest);
}
