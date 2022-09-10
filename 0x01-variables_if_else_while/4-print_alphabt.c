#include <stdio.h>

/**
 * main - print lowercase alpha from a to z but don't include q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'q') && (letter != 'e'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
