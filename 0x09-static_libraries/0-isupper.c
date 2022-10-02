#include "main.h"

/**
* _isupper - Entry point
* Description:_isupper function checks if a character is
* uppercase.
* @c: the character to be checked.
* Return: if uppercase, return 1, else return 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
