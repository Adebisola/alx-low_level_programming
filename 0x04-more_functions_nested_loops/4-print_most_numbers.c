#include "main.h"

/**
* print_most_numbers - Entry point
* Description:print_numbers function prints numbers from
* 0 to 9 that are neither 2 or 4.
* followed by a new line.
* Return: void;
*/

void print_most_numbers(void)
{
	/* local variable declaration */
	char c;

	c = '0';
	while (c <= '9')
	{
	if (c != '2' && c != '4')
	{
		_putchar(c);
	}

	c++;
	}
	_putchar('\n');
}
