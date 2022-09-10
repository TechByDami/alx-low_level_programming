#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns single integer number from 0-10
 * Return: return 0 if successful
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
