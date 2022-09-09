#include <stdio.h>

/**
* main - Entry point
* Description:this function prints all the numbers of
* base 16 in lowercase.
* Return: 0
*/
int main(void)
{
/*local variables declaration*/
	int num;
	char i;
/*for loop execution*/
	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');

	for (i = 'a'; i <= 'f'; i++)
	putchar(i);

	putchar('\n');

	return (0);
}
