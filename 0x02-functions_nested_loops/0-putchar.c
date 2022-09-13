#include "main.h"
/**
 * main - Entry point
 * Description: using the main function
 * this program that prints -putchar.
 * Return: 0
 */
int main(void)
{
	char -putchar[8] = {'-', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(-putchar); c++)
	{
		_putchar(-putchar[c]);
	}
_putchar('\n');
}
