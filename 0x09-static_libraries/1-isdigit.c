#include "main.h"

/**
* _isdigit - Entry point
* Description: _isdigit function check for a digit through
* a range(0 to 9).
* @c: this is the charcter to check
* Return: 0;
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
