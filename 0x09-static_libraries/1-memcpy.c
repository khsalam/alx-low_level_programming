#include "main.h"

/**
 * *_memcpy - copy port of memory area to another
 * @src: memory area to be copied
 * @dest: the detenation area
 * @n: number of  char to be copied
 *
 * Return: pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
