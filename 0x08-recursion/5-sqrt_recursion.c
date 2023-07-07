#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: the successed square root
 */
int sqrtm(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrtm(a, b + 1));
}
/**
 * _sqrt_recursion - returns the square root of n
 * @n: Number Integer
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
