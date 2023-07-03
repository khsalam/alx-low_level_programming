#include "main.h"
#include "stdio.h"

/**
 * *_strchr - Search chr into string
 * @s: the string to search in
 * @c: char to search for
 * *
 * Return: pointer to the char position
 */
char *_strchr(char *s, char c)
{
	int i;
	int f = -1;
	char *p;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			f = i;
			break;
		}
	}
		
	if ( f >=0 )
	{
		p = s + i;
	}
	else
	{
		p = NULL;
	}

	return (p);
}
