#include "main.h"

/**
* _puts_recursion - Entry point.
* Description: _puts_recursion function prints a string
* followed by a new line.
* @s: pointer variable to the string to be printed.
* Return: 0;
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
		_putchar('\n');
}
