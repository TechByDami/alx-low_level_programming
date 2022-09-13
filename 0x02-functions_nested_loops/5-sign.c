#include "main.h"
/**
 * print_sign - return the supposed sign of an interger
 * @value: the value to be evaluated
 * Return: return 1 if positive 0 if value = 0 and -1 if negative
 */

int print_sign(int value)
{
	if (value > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (value == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
