#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int f = 0;
	char *g = str;
	int h;

	while (*g != '\0')
	{
		g++;
		longi++;
	}
	f = longi - 1;
	for (h = 0 ; h <= f ; h++)
	{
		if (h % 2 == 0)
	{
		_putchar(str[h]);
	}
	}
	_putchar('\n');
}
