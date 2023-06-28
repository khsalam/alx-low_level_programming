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
	char pass[100];
	int i;
	int sum;

	srand(time(0));

	for (i = 0; i < 100; i++)
	{
		pass[i] = (rand() % (126 - 48)) + '0';
		if ((sum + pass[100]) > 2772)
		{
			pass[i + 1] = 2772 - sum;
			sum = sum + pass[i + 1];
			putchar(pass[i + 1]);
			break;
		}
		putchar(pass[i]);
		sum = sum + pass[i];
	}
	putchar('\n');
	return (0);
}
