#include "main.h"
#include "ctype.h"

/**
 *print_sign - check if input is alpha 
 *@c: the Input paramater
 *
 * Return: 1 for positive -1 for negative else 0
 */
int print_sign(int c)
{
	if (c > 0)
		return (1);
	if (c == 0)
		return (0);
	if (c < 0)
	       return(-1);
}
