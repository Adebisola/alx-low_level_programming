#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Description:  prints all possible combinations of two two-digit numbers
* Return: 0
*/
int main(void)
{
	/*local variables declaration*/
	int i, j;

	for (i = 0; i < 100; i++)
	{
		/* start of for loop*/
		for (j = 0; j < 100; j++)
		{
		/* conditional statement*/
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
