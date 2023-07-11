#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: number of elements
 * @c: size of one unit
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
