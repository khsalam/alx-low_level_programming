#include "main.h"

/**
 * stlen - obtains length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int stlen(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (stlen(a + 1, l + 1));
}
/**
 * palind - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 */

int palind(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int l;

	l = stlen(s, 0);
	return (palind(s, l));
}
