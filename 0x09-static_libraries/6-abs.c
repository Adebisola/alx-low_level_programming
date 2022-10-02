#include "main.h"

/**
* _abs - Entry point
* Description: _abs function is used in a program to
* computes the absolute value of an integer
* @num: integer argument
* Return: absolute value.
*/

int _abs(int num)
{
	if (num > 0)
		return (num);
	else if (num < 0)
		return (-num);

	return (0);
}
