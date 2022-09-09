#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints all alphabets except e & q
 * Return: EXIT_SUCCESS
 */
int main(void)
{
char alphabet;
for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
{
	putchar(alphabet);
}
}
putchar('\n');
return (EXIT_SUCCESS);

