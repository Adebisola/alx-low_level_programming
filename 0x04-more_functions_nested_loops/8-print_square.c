#include "main.h"

/**
* print_square - Entry point
* Description: print_sqaure function print a square of #'s given size
* @size: size to draw.
*/

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
