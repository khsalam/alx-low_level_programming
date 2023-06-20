#include "main.h"
#include "ctype.h"

/**
 * _islower - check if lower case chart
 *@c: intteger paramater to check
 *
 * Return: 1 if lower else 0
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
