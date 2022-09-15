#include "main.h"

/**
* print_diagonal - Entry point
* Description:print_diagonal function prints '\' on
* the terminal n times.
* @n: number of '\'
* Return:nil;
*/

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
