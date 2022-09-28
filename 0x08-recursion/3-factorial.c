#include "main.h"

/**
* factorial - Entry point.
* Description: factorial function returns the factorial
* of a given number.
* @n: the given integer.
* Return: -1 if the number is less than 0,and factorial of number.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
