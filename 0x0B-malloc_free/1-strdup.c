#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create an array of chars
 * @str: the string
 *
 * Return: pointer to the new str
 */
char *_strdup(char *str)
{
	char *strd;
	unsigned int i,size;

	for (i = 0; str[i] != '\0'; i++)
		size = size + 1;

	if (size == 0)
		return (NULL);
	strd = malloc(size * sizeof(char));
	if (strd == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		strd[i] = str[i];
	}
	return (strd);
}
