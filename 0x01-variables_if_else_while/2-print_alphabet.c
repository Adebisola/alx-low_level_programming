#include <stdio.h>
/**
* main - Entry point

* Description:program that prints numbers from 0 to 99.
* Return: 0
*/

int main(void)
{
	/* local variable declaration */
	int c = 0;
/* while loop execution */
	while (c <= 99)
	{
		putchar(c / 10 + '0');
		putchar(c % 10 + '0');
		if (c != 99)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
putchar('\n');
return (0);
}
