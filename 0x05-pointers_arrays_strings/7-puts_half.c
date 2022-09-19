#include "main.h"

/**
* puts_half - entry.
* Dsecription: the puts_half function prints half of a string,
* followed by a new line.
* @str: string passed as argument.
* Return: Always 0.
*/

void puts_half(char *str)
{
	int i = 0, l = 0, n;

	while (str[i++])
		l++;

	if ((l % 2) == 0)
		n = l / 2;

	else
		n = (l + 1) / 2;

	for (i = n; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
