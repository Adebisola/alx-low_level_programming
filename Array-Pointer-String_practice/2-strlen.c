#include "main.h"

/**
* _strlen - Entry point
* Description: _strlen function returns
* the length of a string.
* @s: string to check.
* Return: Always 0.
*/

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	x++;

	return (0);
}
