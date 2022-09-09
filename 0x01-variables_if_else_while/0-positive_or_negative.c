#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main -Entry point.
* Description: using the main function, this program
* prints if the number is postive, zero, or negative
* Return: 0
*/
int main(void)
{
/* local variable definition */
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there*/
/* check the boolean condition */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
