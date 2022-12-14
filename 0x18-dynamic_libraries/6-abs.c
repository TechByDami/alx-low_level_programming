#include "main.h"
/**
 * _abs - returns the absolute value of a number given to it
 * @value: a given value
 * Return: return 0 if successful 1 if otherwise
 */

int _abs(int value)
{
	if (value < 0)
	{
		return (-(value));
	}
	else
	{
		return  (value);
	}
}
