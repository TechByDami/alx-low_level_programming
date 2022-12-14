#include "main.h"
/**
 * _islower - prints the alphabets in lower cas
 * @alpha: number or an alphabet
 * Return: returns 0 if successful or 1 if otherwise
 */

int  _islower(int alpha)
{
	if (alpha >= 'a' && alpha  <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
