#include "main.h"

/**
* _pow_recursion - Entry point
* Description: _pow_recursion function returns the value of an
* integer raised to the power of another integer.
* @x: the first integer.
* @y: the second integer(power raised).
* Return: -1 if power is less than 0,
* return value of x raised to power y otherwise.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
