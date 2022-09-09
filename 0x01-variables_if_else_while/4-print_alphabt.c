#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints all alphabets except e & q
 * Return: 0
 */
int main(void)
{
/*local variable declaration*/
int i;
/*start of boolean operation*/
for (i = 'a' ; i <= 'z' ; i++)
{
if (i != 'e' && i != 'q')
	putchar(i);

putchar('\n');

}
return (0);
}
