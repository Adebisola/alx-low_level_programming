#include "main.h"

/**
* _puts - Entry.
* Description: the _puts function prints a string,
* followed by a new line, to stdout.
* @str: strin to print.
* Return: Always 0.
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
