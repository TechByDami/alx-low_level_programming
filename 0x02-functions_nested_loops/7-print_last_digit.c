#include "main.h"
/**
 * print_last_digit - prints the last digit of the given vakue
 * @value: the given value
 * Return: returns 0 if succcessful 1 if otherwise
 */

int print_last_digit(int value)
{
	int remain = value % 10;

	if (remain < 0)
	{
		remain = -(remain);
		_putchar(remain + '0');
		return (remain);
	}
	else
	{
		_putchar(remain + '0');
		return (remain);
	}
	return (0);
}
