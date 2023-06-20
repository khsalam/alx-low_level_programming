#include "main.h"
#include "ctype.h"

/**
 * _ialpha - check if input is alpha 
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
