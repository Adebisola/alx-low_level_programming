#include <stdio.h>

/**
* main - Entry point
* Description: this function prints all possible
* combinations of single-digit numbers.
*
* Return:0.
*/
int main(void)
{
/*local variable declaration*/
	int num;
/*for loop execution*/
	for (num = 0; num <= 9; num++)
	{
	putchar((num % 10) + '0');
	if (num == 9)
	continue;
	
	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);
}
