#include "main.h"

/**
* print_line - Entry point.
* Description: print_line functions the _ character
* prints n number of lines in the terminal.
* @n: number of lines.
* Return: 0;
*/

void print_line(int n)
{
	/* local variable declaration */
	int numofcharacter = n;

	for (numofcharacter = n; numofcharacter > 0; numofcharacter--)
		_putchar('_');
	_putchar('\n');
}
