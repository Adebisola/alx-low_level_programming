#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - Entry point.
*
* Description:using the main function
* this program does a relational operation on
* the last digits of int n
* Return: 0
*/

int main(void)
{
/* local variables definition */
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
/* your code goes there */
/* check the boolean condition */
if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
	return (0);
}
