#include "main.h"

/**
* puts2 - Entry point
* Description:the puts2 function prints
* every other char a string.
* @str: string passed as argument.
*/

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
		j++;

	for (i = 0; i < j; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
