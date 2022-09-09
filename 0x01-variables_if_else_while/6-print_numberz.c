#include <stdio.h>

/**
*main - Entry point
*this program prints all single digit numbers of base 10 starting from 0,
*using the main function
*Return: Always 0.
*/

int main(void)
{
    /*local variable declaration*/
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
