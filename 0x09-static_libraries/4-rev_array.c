#include "main.h"

/**
 * reverse_array - a function that reverses the content array
 * @a: array
 * @n: elements of content
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
