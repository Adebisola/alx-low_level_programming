#include "main.h"

/**
* print_rev - Entry.
* Description: print_rev function printts a string in reverse.
* @s:strin to reverse.
* Return: 0.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
