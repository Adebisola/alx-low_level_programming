#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description:Prints the alphabet in lowercase.
* Return: EXIT_SUCCESS
*/

int main(void)
{
	/* local variable declaration */
	int c = 0;
/* while loop execution */
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
putchar('\n');
}
return (EXIT_SUCCESS);
}
