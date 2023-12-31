#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, m, n, len, f, d;

	i = 0;
	m = 0;
	n = 0;
	len = 0;
	f = 0;
	d = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++m;

		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (m % 2)
				d = -d;
			n = n * 10 + d;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
