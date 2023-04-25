#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int d, e, f, next;

	e = 1;

	f = 2;

	for (d = 1; d <= 50; ++d)
	{
		if (e != 20365011074)
		{
			printf("%ld, ", e);
		} else
		{
			printf("%ld\n", e);
		}
		next = e + f;
		e = f;
		f = next;
	}

	return (0);
}
