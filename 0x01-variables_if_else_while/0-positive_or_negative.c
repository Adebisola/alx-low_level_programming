#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/*Description:this main function runs this program*/
int main(void) /*Entry point*/
{
int n; /* local variable definition */
srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there*/
return (0);
/* check the boolean condition */
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
/* if first condition is false then print the following */
printf("%i is zero\n", n);
}
else if (n < 0)
{
/* if second condition is true then print the following */
printf("%i is negative\n", n);
}
}
