#include <stdio.h>

/**
* main -Entry point.
* Description: this function prints the lowercase
* alphabet in reverse.
* Return: 0.
*/
int main(void)
{
/*local variable declaration*/
	char c;
/*while loop execution*/
	for (c = 'z'; c >= 'a'; c--)
	/*while condition returns true, print c*/
	putchar(c);

	putchar('\n');

	return (0);
}
