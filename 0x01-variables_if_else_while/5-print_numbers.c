#include <stdio.h>

/**
 * main - prints from zero to 9 numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');

	
