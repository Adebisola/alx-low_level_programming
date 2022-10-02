#include "main.h"
/**
* _puts - function to use to print.
* *s - string character.
* Return: 0;
*/ 

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
