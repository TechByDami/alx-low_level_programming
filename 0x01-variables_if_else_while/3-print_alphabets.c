#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - returns alphabet in both loweer and upper case
 * Return: returns 0 (successful)
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
