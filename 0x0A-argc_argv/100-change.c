#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int v = 0, coins = 0;
	int c25, c10, c5, c2, c1;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	v = atoi(argv[1]);
	c25 = v / 25;
	v = v % 25;
	c10 = v / 10;
	v = v % 10;
	c5 = v / 5;
	v = v % 5;
	c2 = v / 2;
	v = v % 2;
	c1 = v;
	coins = c25 + c10 + c5 + c2 + c1;
	printf("%d\n", coins);
	return (0);
}
