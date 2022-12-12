#include "main.h"
/**
* _isalpha - Entry point.
* Description: _isalpha function uses this program to
* check for an alphabetic character
* @c: character to check
* Return: 0 if character is lowercase or
* uppercase, return 1 if not.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
