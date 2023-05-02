#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, n, leng, f, digits;

	a = 0;
	b = 0;
	n = 0;
	leng = 0;
	f = 0;
	digits = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digits = s[a] - '0';
			if (b % 2)
				digits = -digits;
			n = n * 10 + digits;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}
