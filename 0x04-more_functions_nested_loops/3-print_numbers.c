#include "main.h"

/**
* print_numbers - Entry point.
* Description: the print_numbers function prints numbers from 0, to 9.
* Return:0;
*
*/

void print_numbers(void)
{
	/* local variable declaration */
	int i;

	for (i = 0; i >= 0 && i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
