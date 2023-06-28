#include <stdio.h>
#include <stdlib.h>
#include "time.h"

/**
 * main - program that generates random valid Password
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pass[15];
	int i;

	srand(time(0));

	for (i = 0; i < 15; i++)
	{
		pass[i] = (rand() % (126 - 32)) + '!';
		putchar(pass[i]);
	}
	putchar('\n');

	return (0);
}
