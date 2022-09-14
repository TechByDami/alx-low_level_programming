#include <stdio.h>
/**
 * main - prints fibonacci numbers starting from 1
 * Return: On successs (0)
 */
int main(void)
{
	int sum = 0;
	int a;
	int b;
	int second = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		second = a + b;
		a = b;
		b = second;
		if ((second <= 4000000) && (second % 2 == 0))
			sum += second;
	}
	printf("%d\n", sum);

	return (0);
}
