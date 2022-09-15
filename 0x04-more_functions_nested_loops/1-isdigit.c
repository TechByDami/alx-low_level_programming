#include "main.h"
/**
 * _isdigit - checks wether a number passed as an argument is digit number
 * @value: argument to be checked
 * Return: returns 1 if successful or 0 if otherwise
 */
int _isdigit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
