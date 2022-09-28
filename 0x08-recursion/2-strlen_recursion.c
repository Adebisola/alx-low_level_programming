#include "main.h"
/**
* _strlen_recursion - Entry point
* Description: _strlen_recursion function returns the
* length of a string.
* @s: pointer variable of string to be reversed.
* Return: the length of the string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
