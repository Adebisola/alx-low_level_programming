#include "main.h"
/**
* print_last_digit - Entry point
* Description: using the print_last_digit function, this program
* prints the last digit of a number.
* @n: Argument passed.
* Return: The value of last digit.
*/

int print_last_digit(int n)
{
	int num = n % 10;

	if (num  < 0)
		num *= -1;

	_putchar(num + '0');

	return (num);
}
